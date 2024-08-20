#include <LiquidCrystal_I2C.h> // se debe de instanciar a la libreria en este lugar
//para que no genere errores al compilar y que se pueda usar la LCD I2C
LiquidCrystal_I2C lcd(0x3f,16,2); // si no te sale con esta direccion  puedes usar (0x3f,16,2) || (0x27,16,2)  ||(0x20,16,2) 
//sensor temperatura
float tempC; // Variable para almacenar el valor obtenido del sensor (0 a 1023)
int pinLM35 = 2; // Variable del pin de entrada del sensor (A2)
//ledscasa
int ledscasa= 8; // variable del pin de salida digital para encender los LEDS con la LDR

//LDR
int intensidadluz = 1; // Pin analógico A1 para leer el valor de la fotoresistencia (0 – 1023)
int cantidadluz; //Variable para almacenar la intensidad de luz



void setup() {
    // Configuramos el puerto serial a 9600 bps
  Serial.begin(9600);
  // inicializamos la LCD 
  lcd.init();
  lcd.backlight();
  lcd.clear();
  // se le indica la posicion donde inprimir los valores y los segmemtos
  lcd.setCursor(0,0);
  lcd.print(" TEMPERATURA "); 
  // se declara este pin del arduino como salida
  pinMode(ledscasa,OUTPUT);

 
 
}
void loop() { 
   // Con analogRead leemos el sensor, recuerda que es un valor de 0 a 1023
  tempC = analogRead(pinLM35); 
   
  // Calculamos la temperatura con la fórmula
  tempC = (5.0 * tempC * 100.0)/1024.0; 
 
  // Envia el dato al puerto serial
  Serial.print(tempC);
  // Salto de línea
  Serial.print("\n");
  // enviamos a imprimir en la LCD el valor de la temperatura y se le indica la posicion 
   lcd.setCursor (5,1);
  lcd.print(tempC);
   lcd.setCursor (11,1);
  lcd.print("C*   ");
  // Esperamos un tiempo para repetir el loop
  delay(1000);
  lcd.display();
  delay(500);

/// FUNCION DE LA LDR
   cantidadluz=analogRead(intensidadluz);  //Lee el valor de la fotoresistencia
    Serial.print("Luz:");
    Serial.println(cantidadluz);           //Muestra el valor medido por el monitor serial
     
     if (cantidadluz > 900){              // indicamos un valor de referencia para comparar. Se debe calibrar
       digitalWrite(ledscasa, HIGH);      // Si es menor que ese valor encendemos el LED
  }
     else {
       digitalWrite(ledscasa, LOW);        //En caso contrario lo apagamos
  }

}