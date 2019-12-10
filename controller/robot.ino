//This Arduino program drives a water dispenser robot.

//Header inclusions
#include <LiquidCrystal.h>
#include <SoftwareSerial.h>

//Global vars
//LCD bytes
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
byte b10[] = {B00001,B00010,B00010,B00100,B00110,B01010,B01001,B10001};
byte b21[] = {B10000,B01000,B01110,B00011,B00000,B00000,B00000,B00000};
byte b31[] = {B00000,B00000,B00000,B11111,B00000,B00000,B00000,B00000};
byte b41[] = {B00000,B00000,B00000,B11111,B00000,B00000,B00000,B00000};
byte b51[] = {B00000,B00000,B00000,B11111,B00000,B00000,B00000,B00000};
byte b61[] = {B00000,B00000,B00000,B11111,B00000,B00000,B00000,B00000};
byte b71[] = {B00000,B00000,B00000,B11111,B00000,B00000,B00000,B00000};
byte b81[] = {B00000,B00000,B00000,B11111,B00000,B00000,B00000,B00000};
byte b91[] = {B00000,B00000,B00000,B11111,B00000,B00000,B00000,B00000};
byte b101[] = {B00000,B00000,B00000,B11111,B00000,B00000,B00000,B00000};
byte b111[] = {B00000,B00000,B00000,B11111,B00000,B00000,B00000,B00000};
byte b121[] = {B00000,B00000,B00000,B11111,B00000,B00000,B00000,B00000};
byte b131[] = {B00000,B00000,B00000,B11111,B00000,B00000,B00000,B00000};
byte b141[] = {B00001,B00010,B00010,B00100,B00110,B01010,B01001,B10001};

//Motor vars
SoftwareSerial Blue(2,3);
long int data;
long int command1 = 92;// forward
long int command2 = 79; // left
long int command3 = 71; //  right
long int command4 = 91; //  Reverse
long int command5 = 10; // stop
char state = 0;

//Pin definitions
int backlight = 13;
//Motor pins
int ena = 5;
int enb = 6;
int in1 = 8;
int in2 = 9;
int in3 = 10;
int in4 = 11;

void setup(){
    
    Serial.begin(9600);
    Blue.begin(9600);
    
    //Define input pins

    //Define output pins
    pinMode(backLight, OUTPUT);
    pinMode(ena, OUTPUT);
    pinMode(enb, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);


    //Initialize devices
    digitalWrite(backLight, HIGH);
    lcd.begin(16,2);
    lcd.clear();

    analogWrite(ena, 255);
    analogWrite(enb, 255);
    delay(100);
}

void loop(){


}

void movement(int move){
    if (move == command1) // Forward
    {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    //delay(100);
    }
        
    if(move == command2) // left
    {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    delay(100);
    }
    
    if(move == command3) // Right
    {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    delay(100);
    }
        
    if(move == command4) // Reverse
    {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    delay(100);
    }
    if(move == command5) // Stop
    {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    delay(100);
    }
}

void smile(){
    
    lcd.setCursor(0,0);
            
    /*lcd.createChar(0, b10);
    lcd.setCursor(1, 0);  
    lcd.write(byte(0));*/
                
    lcd.createChar(1, b21);
    lcd.setCursor(2, 1);  
    lcd.write(byte(1));
    
    lcd.createChar(2, b31);
    lcd.setCursor(3, 1);  
    lcd.write(byte(2));
    
    lcd.createChar(3, b41);
    lcd.setCursor(4, 1);  
    lcd.write(byte(3));
    
    lcd.createChar(4, b51);
    lcd.setCursor(5, 1);  
    lcd.write(byte(4));

    lcd.createChar(5, b61);
    lcd.setCursor(6, 1);  
    lcd.write(byte(5));

    lcd.createChar(6, b71);
    lcd.setCursor(7, 1);  
    lcd.write(byte(6));

    lcd.createChar(7, b81);
    lcd.setCursor(8, 1);  
    lcd.write(byte(7));

    lcd.createChar(8, b91);
    lcd.setCursor(9, 1);  
    lcd.write(byte(8));

    lcd.createChar(9, b101);
    lcd.setCursor(10, 1);  
    lcd.write(byte(9));

    lcd.createChar(10, b111);
    lcd.setCursor(11, 1);  
    lcd.write(byte(10));

    lcd.createChar(11, b121);
    lcd.setCursor(12, 1);  
    lcd.write(byte(11));

    lcd.createChar(12, b131);
    lcd.setCursor(13, 1);  
    lcd.write(byte(12));

    /*lcd.createChar(13, b141);
    lcd.setCursor(14, 1);  
    lcd.write(byte(13));*/
}