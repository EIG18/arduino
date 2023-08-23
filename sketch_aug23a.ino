int pir = 11;
int ledBERDE=10;
int ledAZUL=9;

void setup() {
  pinMode(pir,INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  
  if(digitalRead(pir)){
  
    Serial.println("movimiento");
  digitalWrite(ledBERDE,HIGH);
  digitalWrite(ledAZUL,LOW);

  }
  
  else{
  
    Serial.println("no hay movimiento");
  digitalWrite(ledAZUL,HIGH);
  digitalWrite(ledBERDE,LOW);
  }
  delay(3000);
}
