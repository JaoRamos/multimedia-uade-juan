// La función setup se ejecuta una sola vez cuando presionas reset o encendes la placa
void setup() {
  // Inicializa el pin digital LED_BUILTIN como salida
  pinMode(LED_BUILTIN, OUTPUT);
}

// La función loop se ejecuta repetidamente en un ciclo infinito
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // Encender el LED (HIGH es el nivel de tensión ALTO o 5V)
  delay(1000);                      // espera por 1 segundo (1000ms)
  digitalWrite(LED_BUILTIN, LOW);   // Apagar el LED poniendo la tensión en LOW (0V)
  delay(1000);                      // espera por 1 segundo (1000ms)
}