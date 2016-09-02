int power = A5;
int photoresistor = A0;

void setup()
{
   pinMode(power, OUTPUT);
   digitalWrite(power, HIGH);
   
   pinMode(photoresistor, INPUT);
   Particle.function("sensor",readPhotoresistor); //register a particle function
   
}

void loop(){}

int readPhotoresistor(String unused) { //Particle.functions always take a string as an argument and return an integer
    return analogRead(photoresistor);
}
