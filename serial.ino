
int message = 0;

int t = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(12, OUTPUT);
}

void loop() {
  
  if(Serial.available())
  {
    message = Serial.read();
    Serial.flush();

    if(message == 'h')
    {
      Serial.println("Hello !");
      digitalWrite(12, HIGH);
    }      
    else
    {
      Serial.println("Command unknown !!");
      digitalWrite(12, LOW);
    }
  }
  
  delay(200);
}
