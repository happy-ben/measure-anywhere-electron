int led = D7;

void setup()
{
   pinMode(led, OUTPUT);
   Particle.function("led",ledToggle); //register a particle function: 'led' is bound to letToggle
   digitalWrite(led, LOW);
}

void loop(){}

int ledToggle(String command) {
    if (command=="on") {
        digitalWrite(led,HIGH);
        return 1;
    }
    else if (command=="off") {
        digitalWrite(led,LOW);
        return 0;
    }
    return -1;
}
