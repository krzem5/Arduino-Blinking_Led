#define LED_PIN 12
#define BLINK_INTERVAL 1000



int ls=LOW;
uint32_t lt=0;



void setup(){
	pinMode(LED_PIN,OUTPUT);
}



void loop(){
	uint32_t t=millis();
	if (t-lt>BLINK_INTERVAL){
		lt=t;
		ls=(ls==LOW?HIGH:LOW);
		digitalWrite(LED_PIN,ls);
	}
}
