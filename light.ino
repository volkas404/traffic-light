int red =10;
int yellow =7;
int green =4;
void setup()
{
pinMode(redled, OUTPUT);
pinMode(yellowled, OUTPUT);
pinMode(greenled, OUTPUT);
}
void loop()
{
digitalWrite(redled, HIGH);
delay(10000);
digitalWrite(redled, LOW);
digitalWrite(yellowled, HIGH);
delay(2000);
digitalWrite(yellowled, LOW);
digitalWrite(greenled, HIGH);
delay(10000);
digitalWrite(greenled, LOW);
}