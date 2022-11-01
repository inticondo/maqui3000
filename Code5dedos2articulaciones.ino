#include <Servo.h>

Servo Servodedodos; //Declaramos que queremos controlar un Servo, al cual le vamos a poner un nombre cualquiera
Servo Servodedotres;
Servo Servodedocuatro;
Servo Servodedocinco;
Servo Servodedoseis;
Servo Servomunecauno;
Servo Servocodouno;

int pot2 = 2; //El pin análogo donde va conectado el Potenciómetro
int pot3 = 3;
int pot4 = 4;
int pot5 = 5;
int pot6 = 6;
int pot7 = 7;
int pot8 = 8;

int val2; //El valor a leer por el puerto análogo
int val3;
int val4;
int val5;
int val6;
int val7;
int val8;
void setup()
{
   Serial .begin (9600);
Servodedodos.attach(2); //El pin al cual conectaremos nuestro Servo para eldedo 
Servodedotres.attach(3);
Servodedocuatro.attach(4);
Servodedocinco.attach(5);
Servodedoseis.attach(6);

Servomunecauno.attach(7);
Servocodouno.attach(8);
}

void loop()
{
//dedo uno
val2 = analogRead(pot2); //Aquí le decimos que lea el valor del potenciómetro, valor el cual oscila entre 0 y 1023
val2 = map(val2, 0 ,1023, 0, 180); //Traduce la lectura análga (0, 1023) a grados (0°, 180°)
Servodedodos.write(val2); //Mueve el Servo según la lectura análoga
Serial.println  (val2);
//dedo dos
val3 = analogRead(pot3);
val3 = map(val3, 0 ,1023, 0, 180);
Servodedotres.write(val3);
Serial.println  (val3);
//dedo tres
val4 = analogRead(pot4);
val4 = map(val4, 0 ,1023, 0, 180);
Servodedocuatro.write(val4);
Serial.println  (val4);
//dedo cuatro
val5 = analogRead(pot5);
val5 = map(val5, 0 ,1023, 0, 180);
Servodedocinco.write(val5);
Serial.println  (val5);
//dedo seis
val6 = analogRead(pot6);
val6 = map(val6, 0 ,1023, 0, 180);
Servodedoseis.write(val6);
Serial.println  (val6);

//muneca uno
val7 = analogRead(pot7);
val7 = map(val7, 0 ,1023, 0, 180);
Servomunecauno.write(val7);
Serial.println  (val7);
//codo uno
val8 = analogRead(pot8);
val8 = map(val8, 0 ,1023, 0, 180);
Servocodouno.write(val8);
Serial.println  (val8);
//float  niv=analogRead (A0)/4;
//analogWrite (3, niv);
// Serial .println  (niv);

delay(15);
}
