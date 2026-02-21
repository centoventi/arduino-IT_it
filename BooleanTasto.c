bool TASTO;
void setup() 
{
  pinMode(13, OUTPUT); // Configura il pin 13 come output
  pinMode(3, INPUT);   // Configura il pin 3 come input
}
void loop() 
{
  TASTO = digitalRead(3);
  if (TASTO == HIGH) 
  {
    digitalWrite(13, HIGH); // Accendo il LED
    delay(8000);             // Delay di 800 ms
  } 
  else
  
  digitalWrite(13, LOW);  // Spengo il LED
  
}
