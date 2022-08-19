void setup ( )
{
Serial.begin (9600);
}
void loop ( )
{
Serial.print( "Analog Reading=");
int data = analogRead(0); 
Serial.println (data );
}
