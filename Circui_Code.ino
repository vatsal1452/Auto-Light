void setup()
{
  pinMode(12, OUTPUT);
}

void loop()
{
  int n;
  n=analogRead(A0);
  if(n>100)
  {
    digitalWrite(12,HIGH);
    
  }
  else{
    digitalWrite(12,LOW);
  }
}