int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int i;
void setup()
{
  Serial.begin(9600);
  for(i=2;i<9;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop() 
{
  if(Serial.available()>0)
  {
    char in = Serial.read();
    if(in =='0')
    {
      zero();
    }
    else if(in=='1')
      one();
    else if(in=='2')
      two();
    else if(in=='3')
      three();
    else if(in=='4')
      four();
    else if(in=='5')
      five();
    else if(in=='6')
      six();
    else if(in=='7')
      seven();
    else if(in=='8')
      eight();
    else if(in=='9')
      nine();
    else
      defaut();
  }
}
void zero()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
  delay(1000);
}
void one()
{
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  delay(1000);
}
void two()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,0);
  delay(1000);
}
void three()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
  delay(1000);
}
void four()
{
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
  delay(1000);
}
void five()
{
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
  delay(1000);
}
void six()
{
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  delay(1000);
}
void seven()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  delay(1000);
}
void eight()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  delay(1000);
}
void nine()
{
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
  delay(1000);
}
void defaut()
{
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  delay(1000);
}
