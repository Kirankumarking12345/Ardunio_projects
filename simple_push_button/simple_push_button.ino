int button=2 ;
int led =10;
int state =0;

void setup()
{
  Serial.begin(9600);
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);

}

void loop() 
{
  state=0;
  state = digitalRead(button);
  Serial.println(state);
  if(state==1)
  {
    digitalWrite(led,1);
    delay(100);
  }
  else
  {
    digitalWrite(led,0);
    delay(100);
  }
 }
