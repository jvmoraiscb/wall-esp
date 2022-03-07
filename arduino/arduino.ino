#include <SoftwareSerial.h>
#include <Servo.h>

const int serialRx = 12;
const int serialTx = 13;
const int pinServoBase = 3;
const int pinServoClaw = 4;
const int pinServoX = 5;
const int pinServoY = 6;
int servoBaseAngle;
int servoClawAngle;
int servoXAngle;
int servoYAngle;

Servo servoBase;
Servo servoClaw;
Servo servoX;
Servo servoY;

SoftwareSerial SerialEsp32(serialRx, serialTx);

void setup() {
  Serial.begin(9600);
  SerialEsp32.begin(115200);
  
  servoBase.attach(pinServoBase);
  servoClaw.attach(pinServoClaw);
  servoX.attach(pinServoX);
  servoY.attach(pinServoY);

  servoBaseAngle = 90;
  servoClawAngle = 90;
  servoXAngle = 90;
  servoYAngle = 90;

  servoBase.write(servoBaseAngle);
  servoClaw.write(servoClawAngle);
  servoX.write(servoXAngle);
  servoY.write(servoYAngle);

}

void loop() {
  char string[32] = "";
  strcpy(string, SerialEsp32.read());
  
  if(!strcmp(string, "servoBaseLeft")){
    if(servoBaseAngle >= 10){
        servoBaseAngle -= 10;
    }
    servoBase.write(servoBaseAngle);
    Serial.println("FOI");
  }
  else if(!strcmp(string, "servoBaseMiddle")){
    servoBaseAngle = 90;
    servoBase.write(servoBaseAngle);
  }
  else if(!strcmp(string, "servoBaseRight")){
    if(servoBaseAngle <= 170){
        servoBaseAngle += 10;
    }
    servoBase.write(servoBaseAngle);
  }
  else if(!strcmp(string, "servoXLeft")){
    if(servoXAngle >= 10){
        servoXAngle -= 10;
    }
    servoX.write(servoXAngle);
  }
  else if(!strcmp(string, "servoXMiddle")){
    servoXAngle = 90;
    servoX.write(servoXAngle);
  }
  else if(!strcmp(string, "servoXRight")){
    if(servoXAngle <= 170){
        servoXAngle += 10;
    }
    servoX.write(servoXAngle);
  }
  else if(!strcmp(string, "servoYLeft")){
    if(servoYAngle >= 10){
        servoYAngle -= 10;
    }
    servoY.write(servoYAngle);
  }
  else if(!strcmp(string, "servoYMiddle")){
    servoYAngle = 90;
    servoY.write(servoYAngle);
  }
  else if(!strcmp(string, "servoYRight")){
    if(servoYAngle <= 170){
        servoYAngle += 10;
    }
    servoY.write(servoYAngle);
  }
  else if(!strcmp(string, "servoClawOpen")){
    servoClawAngle = 50;
    servoClaw.write(servoClawAngle);
  }
  else if(!strcmp(string, "servoClawClose")){
    servoClawAngle = 100;
    servoClaw.write(servoClawAngle);
  }

}
