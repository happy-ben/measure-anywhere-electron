int power = A5;
int photoresistor = A0;

int sensorValue;

void setup()
{
   pinMode(power, OUTPUT);
   digitalWrite(power, HIGH);
   
   pinMode(photoresistor, INPUT);
   Particle.variable("sensorValue", &sensorValue, INT); //expose a variabl to the particle cloud
}

void loop(){
    sensorValue = analogRead(photoresistor);
    delay(100);
}

