#include <Servo.h>  /* Servo kutuphanesi projeye dahil edildi */
Servo servoNesnesi;  /* servo motor nesnesi yaratildi */

void setup()
{
  servoNesnesi.attach(5);  /* Servo motor 5 numarali pine baglandi */
}
 
void loop()
{
  servoNesnesi.write(100);  /* Motorun mili 100. dereceye donuyor */
  delay(1000);
  servoNesnesi.write(50);   /* Motor mili 50. dereceye donuyor */
  delay(1000);

}
