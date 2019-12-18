int trigPin = 7;
int echoPin = 6;
int olcum;
int cm;


void setup()
{

pinMode (trigPin,OUTPUT);
pinMode (echoPin,INPUT);
pinMode (8,OUTPUT);
pinMode (9,OUTPUT);
Serial.begin(9600);
}

void loop ()
{
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
olcum = pulseIn(echoPin,HIGH);
cm = olcum / 58 ;

if (cm > 50)
{
digitalWrite(9, HIGH);
}
else
{
digitalWrite(9, LOW);
}
if (cm > 0 && cm < 50)
{
digitalWrite(8, HIGH);
}
else
{
digitalWrite(8, LOW);
}
Serial.print("cm:");
Serial.println(cm);

}
