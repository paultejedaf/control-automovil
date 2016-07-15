///////////////////////////////////////////////////////////////////////////////
// Control Automovil
///////////////////////////////////////////////////////////////////////////////
//
// definir funciones utilizables
//


// lee el voltage desde una entrada analoga
//
float leer_voltage( int puerto ){
   float lectura = 0;
   lectura = map( analogRead( puerto ), 0, 1024, 0, 12 );
   return lectura;
}


// Lee una entrada analoga y en base a eso, calcula el porcentaje de llenado
//
float leer_litros( int puerto ){
   float lectura = 0;
   lectura = map( analogRead( puerto ), 0, 1024, 0, 100 );
   return lectura;
}


// Calcular los litros del estanque a partir del porcentaje de llenado y un tamaño de estanque dado
//
float calcular_litros( float porcentage, int litros_maximos_estanque ){
   //float lectura = 0;
   //lectura = map( analogRead( puerto ), 0, 1024, 0, litros_maximos_estanque );
   //return lectura;
}


// Calcular los litros del estanque leido desde un puerto y un tamaño de estanque dado
//
float calcular_litros( int puerto, int litros_maximos_estanque ){
   float lectura = 0;
   lectura = map( analogRead( puerto ), 0, 1024, 0, litros_maximos_estanque );
   return lectura;
}


// cambia el estado de un puerto de salida
//
void cambiarSalida( int puerto, bool encendido ){

   if( encendido )
   digitalWrite(puerto, HIGH );
   else
   digitalWrite(puerto, LOW );
}


// Lee una entrada y cambia el estado en una salida
// si el puerto esta HIGH cambia salida a HIGH
//
void pulsador( int puerto, int salida ){

   if( digitalRead( puerto ) == HIGH )
      cambiarSalida( salida, true );
   else
      cambiarSalida( salida, false );
}


// Definir tipo de puerto (entrada/salida)
//
void definir_tipo_puerto( int puerto, bool entrada ){
   if( entrada )
      pinMode( puerto, INPUT );
      else
      pinMode( puerto, OUTPUT );
}


// Definir un puerto de entrada digital
//
void definir_entrada( int puerto ){
   definir_tipo_puerto( puerto, true );
}


// definir un puerto de salida digital
//
void definir_salida( int puerto ){
   definir_tipo_puerto( puerto, false );
}


// acciona un buzer de pulsasion de boton
//
void beep( int tiempo ){

}


void inicializar_arreglo( float arreglo, float valor ){
  for ( int x = 0; x < = sizeof( arreglo ); x++ ) {
    arreglo[ x ] = valor;
  }
}




/**/
