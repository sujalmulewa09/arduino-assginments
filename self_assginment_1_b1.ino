// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  for (int i=0; i<3; i++) {
  	digitalWrite(13, HIGH);
    delay(2000);
    digitalWrite(13, LOW);
    delay(2000);
  }
  
  while(true)
  digitalWrite(13, LOW);
}