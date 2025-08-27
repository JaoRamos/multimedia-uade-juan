// ejemplo para enviarle los limites de algun sensor al Serial
// esto ayuda a visualizarlo en el serial plotter de Arduino


void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensor = analogRead(A0);
  Serial.print(0);
  Serial.print(",");
  Serial.print(1023);
  Serial.print(",");
  Serial.println(sensor);
  delay(50);
}