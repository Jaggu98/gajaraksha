 int trigPin =9;
int echoPin =10;
int led=7;
int buzz=3;
void setup()
{
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
long duration ,distance;
digitalWrite(trigPin,HIGH);
delay(1000);
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=(duration/2)/29.1;
if(distance<=35)
{
  Serial.print("elephant approaching be ALERT!!!! at    ");
  Serial.print(distance);
  Serial.print(" cm");
  digitalWrite(led,HIGH); 
  digitalWrite(buzz,HIGH);
  Serial.print("\n");
}
else
{
  digitalWrite(led,LOW);
  digitalWrite(buzz,LOW);
  Serial.println("elephant is out of range");
}
}
