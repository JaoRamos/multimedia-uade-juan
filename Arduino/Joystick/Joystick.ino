// la rutina/bloque setup se ejecuta una vez al comienzo
void setup() {
  // inicializa la comunicación serial a 9600 bits por segundo:
  Serial.begin(9600);
}
 
// la rutina loop se ejecuta una y otra vez
void loop() {
  // lee la entrada en el pin analógico A0:
  int valorX = analogRead(A0);
  int valorY = analogRead(A1);
 
  // imprime/envia el valor leído:
  Serial.print(valorX);
  Serial.print(",");
  Serial.print(valorY);
  Serial.println();
  delay(10);  // demora entre lecturas para estabilidad ¿que pasa si lo cambiamos?
}