// C++ code
//
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(1, LOW);
  delay(100); // Wait for 1000 millisecond(s)
  
  digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(2, LOW);
  delay(100);
  digitalWrite(3, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  delay(100);
  
  
}
