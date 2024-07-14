
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop()
{
  
  int x = digitalRead(9);
  int y = digitalRead(8);

  if (x == HIGH and y == HIGH){
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  }
  else if (x == HIGH and y == LOW){
    
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW);
 
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  }
  else if (x == LOW and y == HIGH){
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  }
  else if (x == LOW and y == LOW){
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  }
  
}
