// el pin digital 2 tiene conectado un pulsador. Le damos un nombre:
int pinBoton = 2;
// "int" indica que ahí guardaremos un número entero (integer)

// la rutina/bloque setup se ejecuta una vez al comienzo
void setup() {
  // inicializa la comunicación serial a 9600 bits por segundo:
  Serial.begin(9600);
  
  // configura el pin del pulsador como entrada, activando también el pullup interno
  pinMode(pinBoton, INPUT_PULLUP);
}

// la rutina loop se ejecuta una y otra vez
void loop() {
  // lee el estado del pulsador y lo guarda en una variable "estadoBoton"
  int estadoBoton = digitalRead(pinBoton);

  // imprime (envia) el estado del pulsador:
  Serial.println(estadoBoton);

  delay(1);  // demora entre lecturas para estabilidad ¿qué pasa si lo eliminamos? ¿y si lo agrandamos?
}

