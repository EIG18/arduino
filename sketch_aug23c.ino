#include <NewPing.h>

#define TRIGGER_PIN  12  

#define ECHO_PIN   11  

#define MAX_DISTANCE 200 

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {

  delay(1000);
  Serial.print("ping:");
  Serial.print(sonar.ping_cm());
  Serial.println("cm");

}
