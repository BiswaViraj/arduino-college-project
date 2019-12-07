String data1;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  if (Serial.available()>0){
    char data = Serial.read();
    data1 = data1 + data;
    delay(10);
  }
  if(data1.length()>0){
    if(data1 == "FORWARD"){
      
    }
    if(data1 == "BACKWARD"){
      
    }
    if(data1 == "LEFT"){
      
    }
    if(data1 == "RIGHT"){
      
    }
  }
    Serial.println(data1);
  }
  delay(50);
}