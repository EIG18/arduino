int ledpin=13;
int ludpin=12;
int lidpin=11;

void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(ludpin,OUTPUT);
  pinMode(lidpin,OUTPUT);
  digitalWrite(ledpin,LOW);
  digitalWrite(ludpin,LOW);
  digitalWrite(lidpin,LOW);
  
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(ledpin,HIGH);
  delay(200);
  digitalWrite(ledpin,LOW);
  digitalWrite(ludpin,HIGH);
  delay(200);
  digitalWrite(ludpin,LOW);
  digitalWrite(lidpin,HIGH);
  delay(200);
  digitalWrite(lidpin,LOW);
  // put your main code here, to run repeatedly:

}
