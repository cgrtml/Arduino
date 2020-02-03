#include <Servo.h>

Servo myservo; 

int potpin = 0;  
int val;    

void setup() {
  myservo.attach(8);  /*Servo motorun sarı bacağı 8. pine bağlanır */
}

void loop() {
  val = analogRead(potpin); /* Potansiyometre orta bacağı A0'a bağlanır */          
  val = map(val, 0, 1023, 0, 180);     
  myservo.write(val);                  
  delay(15);                           
}

/* Servo motorun ve potansiyometrenin + bacakları 5V'a bağlanır. Eksi bacakları ise Ground(GND) bacaklarına bağlanır */
