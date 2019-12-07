#define touch 5;
int led = 13;
int play_l = 2;

void setup() {
  //intialize console
  Serial.begin(9600);

  //define outputs
  pinMode(led, OUTPUT);
  pinMode(play_l, OUTPUT);

  //define inputs
  pinMode(touch, INPUT);

  //set LEDs to LOW
  digitalWrite(led, LOW);
  digitalWrite(play_l, LOW);
  digitalWrite(touch, LOW);
}

void loop() {
    if(digitalRead(touch)){
        Serial.println("Touched...");
        digitalWrite(led, HIGH);
        digitalWrite(play_l, HIGH);
        delay(3000);
        digitalWrite(play_l, LOW);
        delay(20);
        digitalWrite(led, LOW);
    }
}