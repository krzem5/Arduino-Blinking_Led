void setup(){
	pinMode(12,OUTPUT);
}



void loop(){
	digitalWrite(12,HIGH);
	delay(150);
	digitalWrite(12,LOW);
	delay(150);
	digitalWrite(12,HIGH);
	delay(150);
	digitalWrite(12,LOW);
	delay(550);
}





/*
Use this code and work with the help of on board led and without any delay 

const int ledPin =  13;
int ledState = LOW;            
long previousMillis = 0;        
long interval = 1000;
void setup() {
  pinMode(ledPin, OUTPUT);      
}
 
void loop()
{
  unsigned long currentMillis = millis();
 
  if(currentMillis - previousMillis > interval) {
    previousMillis = currentMillis;   
    if (ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;
    digitalWrite(ledPin, ledState);
  }
}
*/
