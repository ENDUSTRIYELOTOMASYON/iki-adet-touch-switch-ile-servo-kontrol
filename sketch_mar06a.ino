#include <Servo.h>
int servo_aci_degeri=0;
Servo servo_kontrol;
#define servo_pin 11
#define buton_yukari 3
#define buton_asagi 2
void setup() {
  servo_kontrol.attach(servo_pin);
  pinMode(buton_yukari,INPUT);
  pinMode(buton_asagi,INPUT);
}
void loop() {
  if (digitalRead(buton_yukari)==HIGH)
  servo_aci_degeri++;
  if (digitalRead(buton_asagi)==HIGH)
  servo_aci_degeri--;

  if(servo_aci_degeri>180)
  servo_aci_degeri=180;

  if(servo_aci_degeri<0)
  servo_aci_degeri=0;
  servo_kontrol.write(servo_aci_degeri);
  delay(20);
}
