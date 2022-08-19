int BUTTON = 7; 
int LED = 8; 
void setup()
{	
 pinMode(BUTTON, INPUT);
 pinMode(LED, OUTPUT);
}
void loop()
{
 int BUTTONstate = digitalRead(BUTTON);
 if (BUTTONstate == HIGH)
 {
  digitalWrite(LED, HIGH); 
 } 
 else{
  digitalWrite(LED, LOW); 
 }
}
