// Librería bounce2
// https://github.com/thomasfredericks/Bounce2
#include <Bounce2.h>

int pinBoton = 2;
int pinLed = 13;  // el led interno...
Bounce bounce = Bounce(); // Crea un objeto Bounce que "controlará" al boton
int estadoLed = LOW;  // una variable para guardar el estado del led (asi lo alternamos luego)

void setup() {
  bounce.attach(pinBoton,  INPUT_PULLUP); // INTERNAL PULL-UP (podemos usar externo tambien)
  bounce.interval(5); // tiempo de espera en ms, probar menos o mas

  // configuramos al LED
  pinMode(pinLed, OUTPUT);
  digitalWrite(pinLed, estadoLed);
}

void loop() {
  bounce.update();  // lee el estado actual del boton

  // alternamos el estado del boton con cada click:

  // esto comprueba si cambió el estado del botón, hay otras maneras de usarlo
  if ( bounce.changed() == true) {
    int valorDebounced = bounce.read();  // guarda el estado actual en una variable
    // comprueba si el estado es LOW
    if ( valorDebounced == LOW ) {
      estadoLed = !estadoLed; // el signo ! invierte el valor lógico (verdadero falso)
      digitalWrite(pinLed, estadoLed); // damos ese estado al led
    }
  }
}
