#include <ADCTouch.h>

int offset = 0;     //reference values to remove offset
int pinSensor = A0;
int umbral = 40;    // se puede ajustar para cambiar sensibilidad (hasta 1023)

void setup() 
{
    // No pins to setup, pins can still be used regularly, although it will affect readings
    Serial.begin(9600);
    offset = ADCTouch.read(pinSensor, 500);    //create reference values to 
} 

void loop() 
{
    int valor = ADCTouch.read(pinSensor);

    valor = valor - offset;       //remove offset

    Serial.print(valor > umbral);    // send (boolean) pressed or not pressed
    Serial.print("\t");              // use if(value > threshold) to get the state of a button

    Serial.println(valor);         //send actual reading

    delay(100);
}