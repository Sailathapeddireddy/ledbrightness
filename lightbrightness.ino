int sensorpin=A0;
int ledpin=9;
int sensorValue=0,val=0;
void setup() {
  Serial.begin(9600);

}

void loop() {
 sensorValue=analogRead(sensorpin);
 Serial.println(sensorValue);
 val=map(sensorValue,0,1023,0,255);
 analogWrite(ledpin,val);
 delay(50);

}
