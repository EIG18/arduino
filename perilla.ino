
int potPin=2;
int ledPin=13;
int val=0;
void setup() {
  pinMode(ledPin,OUTPUT);
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  val=analogRead(potPin);
  Serial.println(val);
  digitalWrite(ledPin,HIGH);
  delay(val);
  digitalWrite(ledPin,LOW);
  delay(val);
  // put your main code here, to run repeatedly:

}
