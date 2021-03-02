#ifndef _HTML_H
#define _HTML_H

String FRONT_page = R"=====(
<!doctype html>
<html>
<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=0\">\n
<script>
  var xhttp = new XMLHttpRequest();
</script>
<script>
  function getsend(arg) 
  { 
    xhttp.open('GET', arg +'?' + new Date().getTime(), true); 
    xhttp.send() 
  } 
</script>
<p align=center>
  <IMG SRC='http://" + WiFiAddr + ":81/stream' style='width:300px; transform:rotate(180deg);'></p><br/><br/>
<p align=center> 
  <button style=width:50px;height:50px onmousedown=getsend('go') onmouseup=getsend('stop') ontouchstart=getsend('go') ontouchend=getsend('stop') ></button> 
</p>
<p align=center>
  <button style=width:50px;height:50px onmousedown=getsend('left') onmouseup=getsend('stop') ontouchstart=getsend('left') ontouchend=getsend('stop')></button>&nbsp;
  <button style=width:50px;height:50px onmousedown=getsend('stop') onmouseup=getsend('stop')></button>&nbsp;
  <button style=width:50px;height:50px onmousedown=getsend('right') onmouseup=getsend('stop') ontouchstart=getsend('right') ontouchend=getsend('stop')></button>
</p>
<p align=center>
  <button style=width:50px;height:50px onmousedown=getsend('back') onmouseup=getsend('stop') ontouchstart=getsend('back') ontouchend=getsend('stop') ></button>
</p>
<p align=center>
  <button style=width:140px;height:40px onmousedown=getsend('ledon')>LED ON</button>
  <button style=width:140px;height:40px onmousedown=getsend('ledoff')>LED OFF</button>
</p>
</html>
)=====";
#endif
