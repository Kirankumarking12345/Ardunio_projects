int r=5;
int b=6;
int g=7;
void setup()
{
  pinMode(r,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() 
{
  digitalWrite(r,0);
  digitalWrite(b,0);
  digitalWrite(g,0);
  delay(1000);
  digitalWrite(r,1);
  digitalWrite(b,0);
  digitalWrite(g,0 );
  delay(1000);
  digitalWrite(r,0);
  digitalWrite(b,1);
  digitalWrite(g,0);
  delay(1000);
  digitalWrite(r,0);
  digitalWrite(b,0);
  digitalWrite(g,1);
  delay(1000);
  digitalWrite(r,1);
  digitalWrite(b,1);
  digitalWrite(g,0);
  delay(1000);
  digitalWrite(r,0);
  digitalWrite(b,1);
  digitalWrite(g,1);
  delay(1000);
  digitalWrite(r,1);
  digitalWrite(b,0);
  digitalWrite(g,1);
  delay(1000);
  digitalWrite(r,1);
  digitalWrite(b,1);
  digitalWrite(g,1);
  delay(1000);




}
