const int LED=8;

void setup()
{
  pinMode (LED,OUTPUT);
}

void loop() 
{
  for (int i=0; i<256; i++)
  {
  analogWrite(LED, i);
 delay(1000);
  }
 for (int i=255; i>=0; i--)
{
 analogWrite(LED, i);
 delay(1000); 
}
}

