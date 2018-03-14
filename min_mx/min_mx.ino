int c = 5655;
int z = 2345;
int p = 7533;
int y = 7585;
void setup() 
{
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println(min(p, y));
delay(1000);
Serial.println(max(z, c));
}

void loop() {
  // put your main code here, to run repeatedly:

}
