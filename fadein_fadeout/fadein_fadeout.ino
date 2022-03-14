int led1=9;
void setup()
{
  pinMode(led1,OUTPUT);
}

void loop()
{
  int i;
  for(i=0;i<=255;i++)
  {
    analogWrite(led1,i);
    delay(50);
  }
  for(i=255;i>=0;i--)
  {
    analogWrite(led1,i);
    delay(50);
  }

}
