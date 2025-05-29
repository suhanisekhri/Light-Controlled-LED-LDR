const int LED=9; 
const int LDRSensor= A0; 
int state; 
int threshold=600; 
void setup()
{
pinMode (LED, OUTPUT);
pinMode (LDRSensor, INPUT);
Serial.begin(9600);
}
void loop()
{
state= analogRead(LDRSensor); 
if (state < threshold)
{
digitalWrite(LED, HIGH); 
Serial.println(state);
delay(1000);
}
else
{
digitalWrite(LED, LOW); //otherwise, the LED is off
Serial.println(state);
delay(500);
}
}