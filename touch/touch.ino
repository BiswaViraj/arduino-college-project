#define sensorPin 1
int rec = 2;
int play = 3;
int led = 13;

void setup()
{
  Serial.begin(9600);
  pinMode(rec, OUTPUT);
  pinMode(play, OUTPUT);
  pinMode(led, OUTPUT);

  pinMode(sensorPin, INPUT);

  digitalWrite(rec, LOW);
  digitalWrite(play, LOW);
  digitalWrite(led, LOW);

}
void loop()
{
  int senseValue = digitalRead(sensorPin);
  while (senseValue == HIGH)
  {
//    digitalWrite(led, HIGH);
//    digitalWrite(rec, HIGH);
//    Serial.println("TOUCHED");
//    delay(8000);
//    digitalWrite(rec, 0);
//    digitalWrite(led, 0);
//    delay(10);

     digitalWrite(led, HIGH);
  digitalWrite(play, HIGH);
  Serial.println("TOUCHED");
  //delay(3000);
  digitalWrite(play, 0);
  digitalWrite(led, 0);
  }

//  delay(1000);
 

  //  delay(500);

  //  digitalWrite(led,HIGH);
  //
  //  delay(8000);
  //  digitalWrite(led,LOW);
  //
  //  delay(1000);
  //  digitalWrite(play,HIGH);
  //  delay(6000);
  //  digitalWrite(play,LOW);
}
