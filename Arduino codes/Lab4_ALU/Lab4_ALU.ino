int a = 8; 
int b = 9; 
int c = 10; 
int f0 = 13; 
int f1 = 12;
int f2 = 11;
int out0 = 2;
int out1 = 3;
void setup()
{

  
  pinMode(out0, INPUT);
  pinMode(out1, INPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(f0, OUTPUT);
  pinMode(f1, OUTPUT);
  pinMode(f2, OUTPUT);
  Serial.begin(9600);
  
    Serial.print(" f2 | f1 | f0 | a | b | c |    function     | out1 | out0 |\n");
  Serial.print("-----------------------------------------------------------\n");
  
  int s_f2,s_f1,s_f0,s_a,s_b,s_c,s_o0,s_o1;
  char buffer[60];
  for(int i = 0;i<64;i++){
    s_f2 = i/32;
    s_f1 = ((i-(s_f2*32))/16)%2;
    s_f0 = ((i-(s_f1*16))/8)%2;
    s_a = ((i-(s_f0*8))/4)%2;
    s_b = ((i-(s_a*4))/2)%2;
    s_c = i%2;
    
    digitalWrite(f2,s_f2);
    digitalWrite(f1,s_f1);
    digitalWrite(f0,s_f0);
    digitalWrite(a,s_a);
    digitalWrite(b,s_b);
    digitalWrite(c,s_c);
    
    s_o0 = digitalRead(out0);
    s_o1 = digitalRead(out1);
 
    int num = (1*s_f0)+(2*s_f1)+(4*s_f2);
    String func;
    switch (num)
    {
    case 0:
        func = "       ZERO      ";
        break;
    case 1:
       	func = "      A OR B     ";
        break;
    case 2:
        func = "     A AND B     ";
        break;
    case 3:
        func = "     A EXOR B    ";
        break;
    case 4:
        func = "     A PLUS B    ";
        break;
    case 5:
        func = "    A MINUS B    ";
        break;
    case 6:
        func = " A PLUS B PLUS C ";
        break;
    case 7:
        func = "A MINUS B MINUS C";
        break;
    
    }
    
    snprintf(buffer,sizeof(buffer),"  %d |  %d |  %d | %d | %d | %d |%s|   %d  |   %d  |\n",s_f2,s_f1,s_f0,s_a,s_b,s_c,func.c_str(),s_o1,s_o0);
    Serial.println(buffer);
    delay(100);
  }
  
}

void loop()
{

}