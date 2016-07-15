///////////////////////////////////////////////////////////////////////////////
// Control Automovil
///////////////////////////////////////////////////////////////////////////////
//
// Archivo de Configuracion de entradas y salidas
//


// entrada digital para accionar la bocina
// desde palanca de cambios u otro punto
//
int boton_bocina = 13;



//
int botones_cambio = 10;



// Pin lectura combustible
//
byte pin_lectura_combustible = 0;


//
//
float lecturas_combustible[ 10 ];


// Estado del sistema (activado/desactivado)
// a futuro
//
bool sistema_activado = true;


// Pin lectura voltage
int pin_lectura_voltage = A0;

// valor de voltage leido
float voltage = 0;



LiquidCrystal pantalla( 12, 11, 5, 4, 3, 2 );



// Salidas de reles
//
//Rele salidas_potencia;
int rele_1 = 5;
int rele_2 = 6;
int rele_3 = 7;
int rele_4 = 8;
