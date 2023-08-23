
int sensor= 8;

int led=4;
  
bool estado = 0;
int buzzer=13;

void setup(){

  pinMode(sensor,INPUT);
  
  pinMode(led,OUTPUT);
  
  Serial.begin(9600);


}

void loop() {

  
  int valor = digitalRead(sensor);
  
  if (valor == 1){

    estado=!estado;
    
    Serial.println(valor);
tone (buzzer,400);

  noTone(buzzer);

  }
 digitalWrite(led,estado);
 


}
