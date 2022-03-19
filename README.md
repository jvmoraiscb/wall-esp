# WALL-E_ESP32-PROJECT
<div align="center">
<img src="https://github.com/jvmoraiscb/WALL-E-ESP32/blob/main/images/WALL-E-ESP32.jpg"/>
</div>
<div>
<p><b>Made by João Victor Morais, Talles Cavalleiro and Vinicius Cole</b>
<br>Federal University of Espírito Santo (UFES) - Computer Engineering
<br>Projeto Integrado em Computação - PIC</p>
</div>

## Summary


A low-cost version of the famous character WALL-E controlled by a webserver.

## Objective

We wanted to use the large ESP-32 affinity to IoT for something. Our first idea was to simply  
control a little camera-equipped car with WiFi connection, something like a spy cart. But suddenly  
we had thoughts about integrating a small robotic arm to the project, making our robot able to  
stream video, drive and grab some simple stuff, as long as the cart keeps recieving WiFi signal.

## Description 

Our little robot consists of a cart with a mechanical arm, controlled by an ESP-cam.  
Through a WEB server, it's possible to see the video transmitted remotely by the esp-cam,  
as well as control the movements of the cart and the arm in real time. The cart moves to  
every direction and the arm can move up and down, and open or close the claw.  
The HTML created on app_httpd.cpp has buttons that send messages on clicks. Those requests  
'activate' handlers, that are responsible for the movements.

#### Components:
- Two 18650 batteries
- 12V 25C 2200mH drone battery
- 5V voltage regulator
- Two 3-6V DC motors
- Three 9g SG90 servos
- **ESP-32 cam**
- l298n motor driver
- The foundation and the other pieces are made of acrylic and 3D printer plastic,  
and are attached with double sided tape

## Schematic
<div align="center">
<img src="https://github.com/jvmoraiscb/WALL-E-ESP32/blob/main/images/electrical-schematic.png"/>
</div>

## WebServer
<img src="https://github.com/jvmoraiscb/WALL-E-ESP32/blob/main/images/web-server.jpg"/>
</div>
<div>

## Video
<!DOCTYPE html>
<html>
<head>
 <meta charset="UTF-8">
 <meta name="Generator" content="EditPlusÂ®">
 <meta name="Author" content="Vagner Bellacosa">
 <meta name="Keywords" content="Exemplo codigo html com pagina Youtube embutida">
 <meta name="Description" content="Treinamento avanÃ§ado em Html e chamada a site externo incluindo video youtube">
 <meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1">
 <title>HTML Video Tag Example</title>
</head>
<body>
<br>
<iframe width="100%" height="443" class="yvideo" id="pgHr6luyjjs"
       src="https://youtu.be/jAPvVoAAZ08"			    
       frameborder="0" allowfullscreen>
<p>Seu navegador não possui Suporte para este recurso...</p> 
</iframe>
</body>
</html>
