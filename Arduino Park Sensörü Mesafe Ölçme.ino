//kadirbeyz
//https://github.com/kadirbeyz

#include <LiquidCrystal.h>  //Kütüphanemizi ekliyoruz
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); /// REGISTER PIN,ENABLE PIN,D4 PIN,D5 PIN, D6 PIN, D7 PIN

int trigPin=7,echoPin=6,buzzer=8,led=9;

void setup() { 
 lcd.begin(16, 2);
  pinMode(trigPin,OUTPUT);
    pinMode(echoPin,INPUT);
      pinMode(buzzer,OUTPUT);
        pinMode(led,OUTPUT);

}

void loop() {
 long sure,mesafe;
 digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin,LOW);

sure=pulseIn(echoPin,HIGH);
mesafe=(sure/2)/29.1;

lcd.clear(); //lcd clear olcak ekran temizler

lcd.setCursor(0,0);
lcd.print("Mesafe");


lcd.setCursor(7,0);
lcd.print(mesafe);

if(mesafe<10)
{
  lcd.setCursor(9,0);
  lcd.print("cm");
}
else if(mesafe<100)
{
lcd.setCursor(10,0);
lcd.print("cm");
}
else if(mesafe<1000)
{
  lcd.setCursor(11,0);
  lcd.print("cm");
}
if(mesafe<=5)
{
digitalWrite(buzzer,HIGH);
digitalWrite(led,HIGH);
delay(20);

digitalWrite(buzzer,LOW);
digitalWrite(led,LOW);
delay(20);
}
else if(mesafe<=10)
{
digitalWrite(buzzer,HIGH);
digitalWrite(led,HIGH);
delay(50);

digitalWrite(buzzer,LOW);
digitalWrite(led,LOW);
delay(50);
}
else if(mesafe<=15)
{
digitalWrite(buzzer,HIGH);
digitalWrite(led,HIGH);
delay(70);

digitalWrite(buzzer,LOW);
digitalWrite(led,LOW);
delay(70);
}
else if(mesafe<=20)
{
digitalWrite(buzzer,HIGH);
digitalWrite(led,HIGH);
delay(100);

digitalWrite(buzzer,LOW);
digitalWrite(led,LOW);
delay(100);
}
else if(mesafe<=25)
{
digitalWrite(buzzer,HIGH);
digitalWrite(led,HIGH);
delay(150);

digitalWrite(buzzer,LOW);
digitalWrite(led,LOW);
delay(150);
}
else if(mesafe<=30)
{
digitalWrite(buzzer,HIGH);
digitalWrite(led,HIGH);
delay(200);

digitalWrite(buzzer,LOW);
digitalWrite(led,LOW);
delay(200);
}
delay(10);
}