# WALL-ESP PROJECT
<div align="center">
<a href="https://www.youtube.com/watch?v=CoDTm-s-2r8">
<img src="https://github.com/jvmoraiscb/WALL-E-ESP32/blob/main/images/WALL-E-ESP32.jpg"/>
</a>
</div>
<div>
<p><b>Made by João Victor Morais, Talles Cavalleiro and Vinicius Cole</b>
<br>Federal University of Espírito Santo (UFES) - Computer Engineering
<br>Projeto Integrado em Computação - PIC</p>
</div>

## Summary

A low-cost version of the famous character WALL-E controlled by a webserver.

## Description 

<div>
<p text-align: justify>WALL-ESP is a cart with a mechanical arm, controlled by an ESP32-cam.<br>Through a WEB server, it's possible to see the video transmitted remotely by the esp-cam, as well as control the movements of the cart and the arm in real time. The cart moves to every direction and the arm can move up and down, forward and backward, and open or close the claw. The HTML created on app_httpd.cpp has buttons that send messages on clicks. Those requests 'activate' handlers, that are responsible for the movements.</p>
</div>

#### Components:
- 2 laptop batteries cells 18650
- Drone battery 12V
- Voltage regulator 5V
- 2 DC motors 3-6V 
- 3 SG90 servos
- **ESP-32 cam**
- L298N motor driver
- Jumpers
- The foundation and the other pieces are made of acrylic and 3D printer plastic,  
and are attached with double sided tape

## Schematic
<div align="center">
<img src="https://github.com/jvmoraiscb/WALL-E-ESP32/blob/main/images/electrical-schematic.png"/>
</div>
<p><i>The 9 volt battery is only for illustrative purposes</i></p>

## WebServer
<div align="center">
<img src="https://github.com/jvmoraiscb/WALL-E-ESP32/blob/main/images/web-server.jpg"/>
</div>