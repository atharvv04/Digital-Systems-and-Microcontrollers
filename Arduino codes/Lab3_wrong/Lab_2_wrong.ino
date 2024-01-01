//int ledPin = 13;  // LED connected to digital pin 13
int inPin1 = 2;    // pushbutton connected to digital pin 7
int inPin2 = 3;    // pushbutton connected to digital pin 7
int val = 0;      // variable to store the read value

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);  // sets the digital pin 13 as output
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
//  pinMode(inPin, INPUT);    // sets the digital pin 7 as input
}

void loop() {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);

  if (digitalRead(inPin1)==LOW && digitalRead(inPin2)==LOW){
    digitalWrite(4, HIGH);
    delay(500);
  }
  digitalWrite(4,LOW);  
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);

  if (digitalRead(inPin1)==HIGH && digitalRead(inPin2)==LOW){
    digitalWrite(5, HIGH);
    delay(1000);
  }
  digitalWrite(5,LOW);  
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);

  if (digitalRead(inPin1)==LOW && digitalRead(inPin2)==HIGH){
    digitalWrite(6, HIGH);
    delay(1500);
  }
  digitalWrite(6,LOW);  
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);

  if (digitalRead(inPin1)==HIGH && digitalRead(inPin2)==HIGH){
    digitalWrite(7, HIGH);
    delay(2000);
  }
  digitalWrite(7,LOW);  


}




/*
digitalRead(4, HIGH); delay(500);
  digitalRead(5, HIGH); delay(500);
  digitalRead(6, HIGH); delay(500);
  digitalRead(7, HIGH); delay(500);



if(digitalRead(inPin) == HIGH) {
    Serial.println("Hello World!");
    delay(500);
  }
  else{
        Serial.println("Bye World!");
        delay(500);
*/