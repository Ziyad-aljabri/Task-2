void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
  
}

void loop()
{
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  analogWrite(6, 120);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
   analogWrite(5, 120);

  
  delay(10); 
}
