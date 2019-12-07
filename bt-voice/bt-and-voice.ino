int led = 13;
int play_l = 2;

void setup() {
  //intialize console
  Serial.begin(9600);

  //define outputs
  pinMode(led, OUTPUT);
  pinMode(play_l, OUTPUT);

  //set connections to LOW
  digitalWrite(led, LOW);
  digitalWrite(play_l, LOW);
}

void loop() {

  char ch = Serial.read();
  switch (ch) {
    case 'a': digitalWrite(led, HIGH);
      digitalWrite(play_l, HIGH);
      Serial.println("Success...");
      delay(3000);
      digitalWrite(play_l, LOW);
      digitalWrite(led, LOW);
      break;
    }
}