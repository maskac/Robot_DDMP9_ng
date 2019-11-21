#include <AFMotor.h>
#include <Servo.h>
int rd = 1;
int a;
int b;
 Servo myservo2;
 Servo myservo;
void setup() {
  
  myservo2.attach(9);
  
  myservo.attach(10);
  Serial.begin(9600);
}
int kamera(int x, int y) {
  x = x + 90;
  y = y + 90;
  if(y < 60) {
    y = 60;
  }
  if(y > 150){
    y = 150;
  }
  myservo.write(x);
  delay(15);
  myservo2.write(y);
  delay(15);
}
