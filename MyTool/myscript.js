var splitter,cont1,cont2;
var last_x,window_width;
var map ;
var markersB17_Config = [];
var markersB17_Install = [];
var markersB17_NO = [];
var markersB14 = [];
	
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
                    band = "";
                }
                else if(band.trim() == "B17 Installed")
                {
                    //if(tput > 300)
                    console.log("Installed ---" + name + " " + lng + " " + lat);
                    console.log( "band = " + band);
                    createMarker(markersB17_Install,name,lng,lat);
                    band = "";
                }
                else if(band.trim() == "B17 No")
                {
                    //if(tput > 300)
                    createMarker(markersB17_NO,name,lng,lat);
                    band = "";
                }
                else if (key.trim() == "Estimated" )
                    tput = value;
            }
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
