void setup(){
 pinMode(10, OUTPUT); 
}
void loop(){
 tone(10, 1000); 
 delay(1000);    
 noTone(10);  
 delay(1000);    
}
