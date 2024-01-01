void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop()
{
  if(digitalRead(2)) {
	Serial.println("Hello World!");
    delay(500);
  }
  else {
    Serial.println("Wrong!");
    delay(500);
  }
}


/*
int ledPin = 12;  // LED connected to digital pin 12
int inPin = 2;    // pushbutton connected to digital pin 2
int val = 0;      // variable to store the read value

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  // sets the digital pin 12 as output
  pinMode(inPin, INPUT);    // sets the digital pin 3 as input
  delay(1000);
}

void loop() {
  val = digitalRead(inPin);   // read the input pin
  if (val == HIGH){
    digitalWrite(12, HIGH);
      Serial.println("Hello World!");
      delay(1000);
  }
  else
  {
        digitalWrite(12, LOW);

    Serial.println("Bye World!");
    delay(1000);
  } 
}
*/
