#define touch 5
int led = 13;
int play_e = 2;

void setup(){
    //intialize console
    Serial.begin(9600);
    
    //define outputs
    pinmode(led, OUTPUT);
    pinmode(play_e, OUTPUT);
    
    //define inputs
    pinmode(touch, INPUT);

    //set LEDs to LOW
    digitalWrite(led, LOW);
    digitalWrite(play_e, LOW);
}

void loop(){
    if(digitalRead(touch)){
        Serial.println("Touched...");
        digitalWrite(led, HIGH);
        digitalWrite(play_e, HIGH);
        delay(8000);
        digitalWrite(led, LOW);
        digitalWrite(play_e, LOW);
    }
}