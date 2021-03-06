#include "Switcher.h"

Switcher::Switcher(QWidget *parent) : QWidget(parent),
_height(16),
_opacity(0.000),
_disabled(false),
_switch(false),
_radius(8.0),
_margin(3),
_brush("#009688"),
_thumb(QBrush("#EDEDED"))
{
    connect(&_timer, SIGNAL(timeout()), this, SLOT(timercall()));
}

Switcher::Switcher(const QColor &color, QWidget *parent) : QWidget(parent),
_height(16),
_disabled(false),
_switch(false),
_opacity(0.000),
_radius(8.0),
_margin(3),
_brush(color),
_thumb(QBrush("#EDEDED"))
{
    connect(&_timer, SIGNAL(timeout()), this, SLOT(timercall()));
}

void Switcher::paintEvent(QPaintEvent *e) {
    QPainter p(this);
    p.setPen(Qt::NoPen);
    p.setRenderHint(QPainter::Antialiasing);

    QPainterPath _primary, _secoundry;
    if (!_disabled) {
        if (_switch) {
            p.setBrush(_brush);
            p.setOpacity(0.500);
        } else {
            p.setBrush(QColor("#000000"));
            p.setOpacity(0.380);
        }
        _primary.addRoundedRect(QRect(_margin, _margin, width() - 2 * _margin, height() - 2 * _margin), _radius, _radius);
        p.drawPath(_primary.simplified());

        p.setBrush(_thumb);
        p.setOpacity(1.0);
        p.drawEllipse(QRectF(_x - (_height / 2), _y - (_height / 2), height(), height()));
    } else {
        p.setBrush(QColor("#000000"));
        p.setOpacity(0.120);
        _primary.addRoundedRect(QRect(_margin, _margin, width() - 2 * _margin, height() - 2 * _margin), _radius, _radius);
        p.drawPath(_primary.simplified());

        p.setOpacity(1.0);
        p.setBrush(QColor("#BDBDBD"));
        p.drawEllipse(QRectF(_x - (_height / 2), _y - (_height / 2), height(), height()));
    }
}

void Switcher::mousePressEvent(QMouseEvent *e) {
    if (!_disabled) {
        if (e->buttons() & Qt::LeftButton) {
            e->accept();
        } else {
            e->ignore();
        }
    }
}

void Switcher::mouseReleaseEvent(QMouseEvent *e) {
    if (!_disabled) {
        if (e->type() == QMouseEvent::MouseButtonRelease && e->button() == Qt::LeftButton) {
            e->accept();
            emit toggled(!_switch);
            _switch = _switch ? false : true;
            _thumb = _switch ? _brush : QBrush("#EDEDED");
            _timer.start(10);
        }  else {
            e->ignore();
        }
    }
}

void Switcher::enterEvent(QEvent *) {
    setCursor(Qt::PointingHandCursor);
}

QSize Switcher::sizeHint() const {
    return minimumSizeHint();
}

QSize Switcher::minimumSizeHint() const {
    return QSize(2 * (_height + _margin), _height + 2 * _margin);
}

void Switcher::resizeEvent(QResizeEvent *e) {
    _x = _height / 2;
    _y = _height / 2;
    QWidget::resizeEvent(e);
}

void Switcher::timercall() {
    if (_switch) {
        _x += 1;
        if (_x >= width() - _height) {
            _timer.stop();
        }
        repaint();
    } else {
        _x -= 1;
        if (_x <= _height / 2) {
            _timer.stop();
        }
        repaint();
    }
}

bool Switcher::isToggled() const {
    return _switch;
}

void Switcher::setToggle(bool set) {
    _switch = set;
}

void Switcher::setDisable(bool set) {
    _disabled = set;
}

bool Switcher::isDisable() const {
    return _disabled;
}