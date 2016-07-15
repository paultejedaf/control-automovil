/*
   Control automovil Daewoo Racer 1.5 1993 (Perlo)
   Paul Tejeda, Talca - Arauco, Chile.
   junio 2016 - indefinido.
   v 0.1.1


   Sistema interactua entregando datos entre el conductor y el automovil.
   Los campos abarcados hasta ahora son:
      - Lectura de estado de estanque de combustible (porcentaje y litros)
      - Procesa señales digitales de baja tension e interactua con alta tension por medio de reles.
         Bocina, luces, otros.
      - Procesa comandos por control remoto.
      - Otros por agregar...


  Licenciado bajo Apache 2.0
  https://www.apache.org/licenses/LICENSE-2.0.txt

*/

// Todas las librerias
//
#include "Lib.h"




void setup() {

  Serial.begin(9600);

  pantalla.begin( 16, 2 );

  // inicializar arreglo estabilizador de combustible
  //
  inicializar_arreglo( lecturas_combustible, 0 );

  definir_entrada( boton_bocina );
  definir_entrada( botones_cambio );

  // entrada 0 a 5v
  definir_entrada( pin_lectura_combustible );

  //salidas de rele
  //
  definir_salida( rele_1 );
  definir_salida( rele_2 );
  definir_salida( rele_3 );
  definir_salida( rele_4 );

}




void loop() {

   int estado = analogRead( pin_lectura_combustible );

   Serial.print( "Combustible: " );
   Serial.println( estado );

   voltage = leer_voltage( pin_lectura_voltage );

   /*
   // Ejemplo de lectura de valor de estanque
   //
   float porcentaje = analogRead( A5 );
   leer_litros(  )

   Serial.write( "Lectura: " + voltage );
   */

   // detectar estado del boton
   //

   // boton pulsador de accionamiento de bocina desde palanca de cambios
   //
   pulsador( boton_bocina, rele_1 );

}










/**/
