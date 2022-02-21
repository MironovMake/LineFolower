#include <Arduino.h>
// подключаем мотор
int motorIN1a = 3;
int motorIN1b = 4;
int motorEN1 = 5; //! пин с ШИМ

int motorIN2a = 6;
int motorIN2b = 7;
int motorEN2 = 9; //! пин с ШИМ

int sensor1 = 8;
int sensor2 = 10;
int sensor3 = 11;
int sensor4 = 12;

void setup()
{
  pinMode(motorIN1a, OUTPUT);
  pinMode(motorIN1b, OUTPUT);
  pinMode(motorEN1, OUTPUT);

  pinMode(motorIN2a, OUTPUT);
  pinMode(motorIN2b, OUTPUT);
  pinMode(motorEN2, OUTPUT);

  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
}