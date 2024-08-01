//ledscasa
int ledscasa=10;
// buzzer
int zumbador=9;
//sensor gas
int smokeA0 = A0;
int sensorThreshold = 300;
int buzzer = 9;
int LED1 = 2;
int LED2 = 3;

//LDR
int intensidadluz = 1; // Pin analógico A0 para leer el valor de la fotoresistencia (0 – 1023)
int cantidadluz; //Variable para almacenar la intensidad de luz

//Servo
#include <Servo.h>  // servo library 
Servo servo1;  // Creamos una función servo1 para controlar el motor
char val;

// LCD
#include <Wire.h> //Inicia la comunicación I2C
#include <LiquidCrystal_I2C.h> //Descargar la librería, Programa – incluir librería (zip)
LiquidCrystal_I2C lcd(0x27,16,2); //configura la LCD 





void setup() {
  // put your setup code here, to run once:
  pinMode(ledscasa,OUTPUT);
  Serial.begin(9600);
  servo1.attach(3); // attach indica que podemos mandar señales de control de Arduino al servo por pin 3
  lcd.init(); // inicializa la lcd
  lcd.backlight();
  lcd.clear();// Imprime un mensaje en la LCD.
  lcd.setCursor(0,0);
  lcd.print("HUMEDAD Y");
  lcd.setCursor(0,1);
  lcd.print("TEMPERATURA");
  delay(1000);
  servo1.write(90);
  pinMode(zumbador,OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
 
  }

void loop() {
    
    cantidadluz=analogRead(intensidadluz);  //Lee el valor de la fotoresistencia
    Serial.print("Luz:");
    Serial.println(cantidadluz);           //Muestra el valor medido por el monitor serial
     
     if (cantidadluz > 800){              // indicamos un valor de referencia para comparar. Se debe calibrar
       digitalWrite(ledscasa, HIGH);      // Si es menor que ese valor encendemos el LED
  }
     else {
       digitalWrite(ledscasa, LOW);        //En caso contrario lo apagamos
  }
    
//Control bluetooth servo
   if( Serial.available() )
   val = Serial.read(); //lee el valor enviado por el puerto serie
   if( val == 'A' ){ // si es A servo a 0º
      servo1.write(0);    // Posición del servo a 0 grados 
      
    }
   if( val == 'B' ){ // si es B servo a 90º
      servo1.write(90);    // Posición del servo a 90 grados 
    }

  int analogSensor = analogRead(smokeA0);

  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThreshold)
  {
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    tone(buzzer, 1000, 200);
  }
  else
  {
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
    noTone(buzzer);
  }
  delay(100);


  // Escritura en LCD
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Humedad:");
    //lcd.print(h);
    lcd.print(" %");
    lcd.setCursor(0,1);
    lcd.print("Temp.:  ");
    //lcd.print(t);
    lcd.print(" C");
    delay(1000);
    
}
