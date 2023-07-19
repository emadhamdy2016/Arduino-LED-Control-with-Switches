// C++ code
int counter=0;
void setup()
{
  for(int i=8 ; i<=13 ; i++)
  {
  pinMode(i, OUTPUT);
}
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}
void loop()
{
 if(digitalRead(7))
 {
   analogWrite(13,128);
  digitalWrite(12, HIGH);
 }
    else{
      analogWrite(13,0);
      digitalWrite(12, 0);
    }
     if(digitalRead(6))
 {
   analogWrite(8,128);
  digitalWrite(10, HIGH);
 }
    else{
      analogWrite(10,0);
      digitalWrite(8, 0);
    }
  }