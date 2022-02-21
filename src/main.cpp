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
  // подключаем один мотор
  pinMode(motorIN1a, OUTPUT);
  pinMode(motorIN1b, OUTPUT);
  pinMode(motorEN1, OUTPUT);

  // подключаем другой мотор
  pinMode(motorIN2a, OUTPUT);
  pinMode(motorIN2b, OUTPUT);
  pinMode(motorEN2, OUTPUT);
  // подключаем датчики черного/белого
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
}
int SENSOR_READER() {}
void MOTOR_CONTROL(int reader)
{
  if (reader == 1) // едем прямо
  {
    digitalWrite(motorIN1a, HIGH);
    digitalWrite(motorIN1a, LOW);
    digitalWrite(motorIN2a, HIGH);
    digitalWrite(motorIN2b, LOW);
  }

  else if (reader == 2)
  {
    digitalWrite(motorIN1a, HIGH);
    digitalWrite(motorIN1a, LOW);
    digitalWrite(motorIN2a, LOW);
    digitalWrite(motorIN2b, LOW);
  }

  else if (reader == 3)
  {
    digitalWrite(motorIN1a, LOW);
    digitalWrite(motorIN1a, LOW);
    digitalWrite(motorIN2a, HIGH);
    digitalWrite(motorIN2b, LOW);
  }

  else
  {
    digitalWrite(motorIN1a, LOW);
    digitalWrite(motorIN1a, LOW);
    digitalWrite(motorIN2a, LOW);
    digitalWrite(motorIN2b, LOW);
  }
}
void loop()
{
  /*
  считывам показания с дачтчиков (есть 2 датчика)
  !фукнкция обработки датчиков{
  если оба датчика показывают белое тогда вернуть 1
  если левый датчик показывает белое, правый черное тогда вернуть 2
  если левый датчик показывает черное, правый белое тогда вернуть 3
  если оба датчика показываю черное тогда вернуть 4
  !}
  ! управление моторами{
  если //! фукнкция обработки датчиков вернула 1
  едем прямо
  если //! фукнкция обработки датчиков вернула 2
  поварачиваем напрвао
  если //! фукнкция обработки датчиков вернула 3
  поварачиваем налево
  если //! фукнкция обработки датчиков вернула 4
  проверяем где мы. Если на старте, тогда едем вперед. Если мы уже едем, тогда останавливаемся.
  !}

  */
}