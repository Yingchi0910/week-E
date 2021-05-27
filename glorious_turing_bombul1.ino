// C++ code
//
int SensorValue = 0;
int	LedDimming = 0;
int PwnPing = 9;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  
} 

void loop()
{
  SensorValue = analogRead(A0);
  Serial.println(SensorValue);
  LedDimming = map(SensorValue,700,930,0,255);
  if(LedDimming<0)LedDimming = 0;
  analogWrite(PwnPing,LedDimming);
  delay(100);

}