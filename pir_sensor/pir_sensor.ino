
int pir=13;
int led=8;
int sensorval;
void setup() {
pinMode(pir,INPUT);

}

void loop() {
  sensorval=digitalRead(pir);
  if (sensorval==HIGH){
    digitalWrite(led,HIGH);
    }
  else{
    digitalWrite(led,LOW);
    }
}
