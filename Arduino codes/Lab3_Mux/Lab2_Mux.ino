int apin = 13;
int bpin = 12;
int cpin = 11;
int dpin = 10;
int slpin = 9;
int s2pin = 8;

int a = 0;
int b = 0;
int c = 0;
int d = 0;
int s1 = 0;
int s2 = 0;

void setup() {
  pinMode(apin, OUTPUT);
  pinMode(bpin, OUTPUT);
  pinMode(cpin, OUTPUT);
  pinMode(dpin, OUTPUT);
  pinMode(slpin, OUTPUT);
  pinMode(s2pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    a = Serial.read() - '0';
    b = Serial.read() - '0';
    c = Serial.read() - '0';
    d = Serial.read() - '0';
    s1 = Serial.read() - '0';
    s2 = Serial.read() - '0';

    digitalWrite(apin, a);
    digitalWrite(bpin, b);
    digitalWrite(cpin, c);
    digitalWrite(dpin, d);
    digitalWrite(slpin, s1);
    digitalWrite(s2pin, s2);

    Serial.print("A: ");
    Serial.print(a);
    Serial.print("; B: ");
    Serial.print(b);
    Serial.print("; C: ");
    Serial.print(c);
    Serial.print("; D: ");
    Serial.println(d);

    if (s1 == 0 && s2 == 0)
      Serial.println("The bits 00 are selected. C is chosen.");
    else if (s1 == 0 && s2 == 1)
      Serial.println("The bits 01 are selected. B is chosen.");
    else if (s1 == 1 && s2 == 0)
      Serial.println("The bits 10 are selected. D is chosen.");
    else
      Serial.println("The bits 11 are selected. A is chosen.");
  }
  delay(100);
}





/*
int inPin1 = 2;
int inPin2 = 3;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(6,LOW);

}
*/