int SoundPin = 13;

int val;



int D = 1000;
void setup() 
{
  Serial.begin(9600);

 
}
void sound() 
{
  tone(SoundPin, 1915);
  delay(1000);
  noTone(13);
}

void loop()
{
  val=analogRead(0);
  
  Serial.println(val,DEC);

if (val>1000){sound();}
  delay(100);
  noTone(13);
}









