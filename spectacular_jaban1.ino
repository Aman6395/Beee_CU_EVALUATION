int LED13=13;
int LED11=11;
int LED9=9;
int LED7=7;
int LED5=5;

int LED12=12;
int LED10=10;
int LED8=8;
int LED6=6;

int BUTTON1=4;
int BUTTON2=3;

void setup()
{
  pinMode(LED13, OUTPUT);
   pinMode(LED11, OUTPUT);
   pinMode(LED9, OUTPUT);
   pinMode(LED7, OUTPUT);
   pinMode(LED5, OUTPUT);
  
   pinMode(LED12, OUTPUT);
   pinMode(LED10, OUTPUT);
   pinMode(LED8, OUTPUT);
   pinMode(LED6, OUTPUT);
  
  
   pinMode(BUTTON1, INPUT);
   pinMode(BUTTON2, INPUT);
}

void loop()
{
  if(digitalRead(BUTTON2)==HIGH)
  {
    int i;
  for(i=1;i<=60;i++)
  {
    digitalWrite(13,1);
    delay(500);
    digitalWrite(13,0);
    delay(500);
     digitalWrite(11,1);
    delay(500);
    digitalWrite(11,0);
    delay(500);
     digitalWrite(9,1);
    delay(500);
    digitalWrite(9,0);
    delay(500);
     digitalWrite(7,1);
    delay(500);
    digitalWrite(7,0);
    delay(500);
     digitalWrite(5,1);
    delay(500);
    digitalWrite(5,0);
    delay(500);
    
  }
    else if((digitalRead(BUTTON1)==HIGH)&&(digitalRead(BUTTON2)==HIGH)
  {
    int i;
  for(i=1;i<=60;i++)
  {
    digitalWrite(12,1);
    delay(500);
    digitalWrite(12,0);
    delay(500);
     digitalWrite(10,1);
    delay(500);
    digitalWrite(10,0);
    delay(500);
     digitalWrite(8,1);
    delay(500);
    digitalWrite(8,0);
    delay(500);
     digitalWrite(6,1);
    delay(500);
    digitalWrite(6,0);
    delay(500);
    
    
  }}
    else
    {
      
    }
    
        

  
  }
    