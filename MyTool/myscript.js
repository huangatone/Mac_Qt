var splitter,cont1,cont2;
var last_x,window_width;
var map ;
var markersB17_Config = [];
var markersB17_Install = [];
var markersB17_NO = [];
var markersB14 = [];


var value_b17_config = [];
value_b17_config.push('data1');
var value_b17_config_x = [];
value_b17_config_x[0] = 'x';
var v17 = [];
v17[0] = value_b17_config_x; 
v17[1] = value_b17_config;
	
function getCircle(magnitude)
{
    return {
      path: google.maps.SymbolPath.CIRCLE,
      fillColor: 'red',
      fillOpacity: .6,
      scale: Math.pow(2, magnitude) / 2,
      strokeColor: 'white',
      strokeWeight: .5
    };
}
	  
function init()
{
    window_width=window.innerWidth;
    splitter=document.getElementById("splitter");
    cont1=document.getElementById("div2");
    cont2=document.getElementById("div1");
    var dx=cont1.clientWidth;
    splitter.style.marginLeft=dx+"px";
    dx+=splitter.clientWidth;
    cont2.style.marginLeft=dx+"px";
    dx=window_width-dx;
    cont2.style.width=dx+"px";
    splitter.addEventListener("mousedown",spMouseDown);
    google.charts.load("current", {packages:["corechart"]});
    G_chart();

}

function spMouseDown(e)
{
    splitter.removeEventListener("mousedown",spMouseDown);
    window.addEventListener("mousemove",spMouseMove);
    window.addEventListener("mouseup",spMouseUp);
    last_x=e.clientX;
}

function spMouseUp(e)
{
    window.removeEventListener("mousemove",spMouseMove);
    window.removeEventListener("mouseup",spMouseUp);
    splitter.addEventListener("mousedown",spMouseDown);
    resetPosition(last_x);
}

function spMouseMove(e)
{
    resetPosition(e.clientX);
}

function resetPosition(nowX)
{
    var dx=nowX-last_x;
    dx+=cont1.clientWidth;
    cont1.style.width=dx+"px";
    splitter.style.marginLeft=dx+"px";
    dx+=splitter.clientWidth;
    cont2.style.marginLeft=dx+"px";
    dx=window_width-dx;
    cont2.style.width=dx+"px";
    last_x=nowX;
    google.maps.event.trigger(map, "resize");
}

function initMap()
{
    map = new google.maps.Map(document.getElementById('div2'), {
    zoom: 8,
    center: {lat:43.643794, lng:-79.613486}
    });
}

//create a marker
function createMarker(group,name,lng,lat)
{
    var latLng = new google.maps.LatLng(  lat,lng);
    var image = 'https://developers.google.com/maps/documentation/javascript/examples/full/images/beachflag.png';
    var marker = new google.maps.Marker({
            position: latLng,
            map: null,
            label: name,
            icon: getCircle(5)
          });

    var infowindow = new google.maps.InfoWindow({
      content: "test information"
    });

    marker.addListener('click', function() {
      map.setZoom(8);
      map.setCenter(marker.getPosition());
      infowindow.open(marker.get('map'), marker);
    });

    group.push(marker);
}
// Removes/shows the markers from the map, but keeps them in the array.
function showMarkers(group,m)
{
    for (var i = 0; i < group.length; i++)
    {
        group[i].setMap(m);
    }
}


 //checkbox click event
function handleClick(cb,group)
{
    var p = null;
    if(cb.checked)
    {
        p = map;
    }
    showMarkers(group,p);
}

function read_sheet(wb,sheetName)
{
    var rowObj =XLSX.utils.sheet_to_row_object_array(wb.Sheets[sheetName]);
    var jsonObj = JSON.stringify(rowObj);
    // ----------------- read every cell ----------------------------------------------
    JSON.parse(jsonObj, (key, value) =>
    {
          //console.log(key); // log the current property name, the last is "".

          if( key.trim() == "ENUM")
          {
            name = value;
          }
          else if(key.trim() == "B17")
          {
            band = value;
          }
          else if( key.trim() == "Long")
          {
            lng = value;
          }
          else if(key.trim() == "Lat" )//&& tput < 3000
          {
                lat = value;
                //todo
                if(band.trim()  == "B17 configured")
                {
                    //if(tput > 300)
                    createMarker(markersB17_Config,name,lng,lat);
                    value_b17_config.push(tput);
                    value_b17_config_x.push(value_b17_config_x.length);
                    band = "";
                }
                else if(band.trim() == "B17 Installed")
                {
                    //if(tput > 300)
                    console.log("Installed ---" + name + " " + lng + " " + lat);
                    console.log(band);  
                    createMarker(markersB17_Install,name,lng,lat);
                    band = "";
                }
                else if(band.trim() == "B17 No")
                {
                    //if(tput > 300)
                    createMarker(markersB17_NO,name,lng,lat);
                    band = "";
                }
                
            }
            else if (key.trim() == "Estimated" )
                    tput = value;
          //console.log(value);
          //console.log('---------------\n');
          return value;     // return the unchanged property value.
    });
    console.log(jsonObj)
    console.log('---------------\n');
    //init label value;
    document.getElementById("id1").innerHTML = markersB17_Config.length;
    document.getElementById("id2").innerHTML = markersB17_Install.length;
    document.getElementById("id3").innerHTML = markersB17_NO.length;

    var pia = ['D1',markersB17_Config.length,'D2',markersB17_Install.length,'D3',markersB17_NO.length]
    createChart(pia);

    var chart3 = c3.generate({
           bindto: '#chart3',
    data: {
      x:'x',
        columns: v17,
        types: {
            data1: 'spline'
           
        },
        
    }
});
}

//------------ read xml file ------------------------------
function ExcelExport(event)
{
    var name;
    var band;

    var tput;
    var lng;
    var lat;

    var index = 0;
    var input = event.target;
    var reader = new FileReader();
    reader.onload = function()
    {
        var fileData = reader.result;
        var wb = XLSX.read(fileData, {type : 'binary'});
        // --------------- read every sheet ----------------------------------------------
        wb.SheetNames.forEach(function(sheetName)
        {
            read_sheet(wb,sheetName);
        });

    };

    var res = reader.readAsBinaryString(input.files[0]);

    console.log('---------------\n');
}

function createChart(pia_data)
{
    var column = [];
    for(var i=0; i< pia_data.length; i+=2)
    {
        column[i/2] = [ pia_data[i],pia_data[i+1]];
    }

	var chart4 = c3.generate({
           bindto: '#chart4',
		   data: {
		        columns: column,
		        types: {
		            data1: 'area',
		            data2: 'area-spline'
		        }
		    }
	});
        chart4.transform('pie');
}


function G_chart() 
{
	
      google.charts.setOnLoadCallback(drawChart);
      function drawChart() {
        var data = google.visualization.arrayToDataTable([
          ['ID', 'X', 'Y', 'Temperature'],
          ['',   80,  167,      12],
          ['',   79,  136,      13],
          ['',   78,  184,      5],
          ['',   72,  278,      23],
          ['',   81,  200,      21],
          ['',   72,  170,      10],
          ['',   68,  477,      8]
        ]);

        var options = {
          colorAxis: {colors: ['yellow', 'red']}
        };

        var chart = new google.visualization.BubbleChart(document.getElementById('chart_div'));
        chart.draw(data, options);
      }
}