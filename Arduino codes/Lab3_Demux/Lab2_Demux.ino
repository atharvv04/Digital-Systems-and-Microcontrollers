int inpin = 13;
int slpin = 9;
int s2pin = 8;
int in = 0;
int s1 = 0;
int s2 = 0;

void setup() {
  pinMode(inpin, OUTPUT);
  pinMode(slpin, OUTPUT);
  pinMode(s2pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    in = Serial.read() - '0';
    Serial.read(); // Read and discard the separator
    s1 = Serial.read() - '0';
    s2 = Serial.read() - '0';
  }

  digitalWrite(inpin, in);
  digitalWrite(slpin, s1);
  digitalWrite(s2pin, s2);

  Serial.print("Input: ");
  Serial.println(in);

  if (s1 == 0 && s2 == 0)
    Serial.println("The bits 00 are selected. A is chosen");
  else if (s1 == 0 && s2 == 1)
    Serial.println("The bits 01 are selected. B is chosen");
  else if (s1 == 1 && s2 == 0)
    Serial.println("The bits 10 are selected. C is chosen");
  else
    Serial.println("The bits 11 are selected. D is chosen");

  delay(100);
}








/*
int inPin1 = 2;
int inPin2 = 3;
int inPiN3 = 4;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
}
*/