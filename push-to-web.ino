int boardLed = D7;
int photoresistor = A0;
int power = A5;

int initialValue;

void setup() {
    pinMode(boardLed,OUTPUT);
    digitalWrite(boardLed, LOW);
    
    pinMode(power,OUTPUT);
    digitalWrite(power,HIGH);
    
    pinMode(photoresistor,INPUT);
    
    initialValue = analogRead(photoresistor);
}

void loop() {
    int currentValue = analogRead(photoresistor);
    if((initialValue - currentValue) > 300){
        Particle.publish("lightStatus","darker",60,PRIVATE); //publish 'ligthStatus' event with 'darker' as data. 60 is TTL (not taken in considetarion by cloud yet)
        blink();
        blink();
    }
    delay(100);
}

void blink(){
    digitalWrite(boardLed,HIGH);
    delay(500);
    digitalWrite(boardLed,LOW);
}
