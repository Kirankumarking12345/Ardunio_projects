int ir=7;
int value;
void setup() 
{
  pinMode(7,INPUT);
  Serial.begin(9600);
 
}

void loop() 
{
  value = digitalRead(7);
  if (value==0)
  {
    Serial.println("Object found");
  }
  else
  {
    Serial.println("Object not found");
  }
  
  

}
