# WALL-E_ESP32-PROJECT
<div align="center">
<img src="https://github.com/jvmoraiscb/WALL-E-ESP32/tree/main/images/WALL-E-ESP32"/>
</div>
*Federal University of Espírito Santo - UFES - Computer Engineering*  
Projeto Integrado em Computação - PIC  
**Made by João Victor Morais, Talles Cavalleiro and Vinicius Cole** 

## Summary

An ESP-cam based spy robot, that can be controlled and vizualized wireless through a webserver.  
It is also equipped with a robotic arm.

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
<img src="https://github.com/jvmoraiscb/WALL-E-ESP32/tree/main/images/electrical-schematic"/>
</div>

## WebServer

## Video
