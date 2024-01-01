/*
int i;
void setup()
{
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(2, OUTPUT);
 Serial.begin(9600);
}

void loop()
{
 Serial.print("Input=");
  while(Serial.available() == 0) {}
  i = Serial.read();
  i = i -'0';
  Serial.println(i);
  while(Serial.read() != '\n');
 
  if (i == 0){
    i = i + 1;
    counter(i);
  }
  else if (i == 1){
    i = 2;
    counter(i);
  }
  else if (i == 2){
    i = 4;
    counter(i);
  }
  else if (i == 3){
    i = 8;
    counter(i);
  }
  else if (i == 4){
    i = 16;
    counter(i);
  }
  else if (i == 5){
    i = 32;
    counter(i);
  }
  else if (i == 6){
    i = 64;
    counter(i);
  }
  else if (i == 7){
    i = 128;
    counter(i);
  }
  else {
    Serial.println("Invalid input");
    i = 0;
    counter(i);
  }
  
  }
 void counter(int val){
  digitalWrite(3, LOW);
   shiftOut(2, 4, LSBFIRST, val); 
   digitalWrite(3, HIGH); 
 }

*/






void setup()
{
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(2, OUTPUT);
}

void loop()
{
 for (int i = 0; i <= 255; i++){
   LEDs(i);
   delay(200); 
  }
 }

 void LEDs(int value){
  digitalWrite(3, LOW);
   shiftOut(2, 4, LSBFIRST, value); 
   digitalWrite(3, HIGH); 
 }



/*
// C++ code

// ser = input
//lclk = latch clock
// srclk = shift register clock
int ser = 2, srclk = 3, lclk = 4;

void setup()
{
  pinMode(ser, OUTPUT);
  pinMode(srclk, OUTPUT);
  pinMode(lclk, OUTPUT);
}

void loop()
{
  for(int i = 0; i < 256; i++)
  {
    digitalWrite(lclk, LOW);
    shiftOut(ser, srclk, MSBFIRST, i);
    digitalWrite(lclk, HIGH);
    delay(200);
  }
}
*/