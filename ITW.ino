int sensor = A0;
int redled = 12;
int blueled = 11;
int pump = 3;

#define REF 20

void setup()
{
  Serial.begin(9600);
  pinMode(sensor,INPUT);
  pinMode(redled,OUTPUT);
  pinMode(blueled,OUTPUT);
  pinMode(pump,OUTPUT);
 
}
void loop()
{
  
  int sensor_value = analogRead(sensor);
  
  if (sensor_value>REF)
  {
    digitalWrite(blueled,HIGH);
    digitalWrite(redled,HIGH);
    digitalWrite(pump,LOW);
    delay(1000);
   }
   else
   {
    digitalWrite(blueled,LOW);
    digitalWrite(redled,LOW);
    digitalWrite(pump,HIGH);
   }

   Serial.println(sensor_value);
}
