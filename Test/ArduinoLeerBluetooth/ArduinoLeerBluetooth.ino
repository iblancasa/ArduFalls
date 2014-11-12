#include <SoftwareSerial.h>// Importando biblioteca puerto serial

SoftwareSerial Dipositivo(10, 11); // RX, TX
int ledpin=13; // LED    


int estado = LOW;   // estado used to set the LED
int orden; 

void setup() {
  Dipositivo.begin(9600);
  pinMode(ledpin,OUTPUT);
}

void loop() {
  if (Dipositivo.available()){
    orden=Dipositivo.read();
    if(orden=='1'){
      digitalWrite(ledpin,1);
      Dipositivo.println("Encendido");
    }
    
    if (orden=='0'){
      digitalWrite(ledpin,0);
      Dipositivo.println("Apagado ");
    }

  }


}
