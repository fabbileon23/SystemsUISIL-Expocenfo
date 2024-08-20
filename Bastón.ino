// defines pins numbers
const int trigPin = 6;//amarillo
const int echoPin = 7;//naranja
const int buzzer = 12;
int MoPin = 9;    // vibrator Grove connected to digital pin 9
 
// defines variables
long duration;
int distance;
int safetyDistance;
 
 
void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(buzzer, OUTPUT);
Serial.begin(9600); // Starts the serial communication
pinMode( MoPin, OUTPUT );// vibrator OutPut
}
 
 
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
 
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
 
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
 
// Calculating the distance
distance= duration*0.034/2;
 
safetyDistance = distance;
if (safetyDistance <= 50){
  digitalWrite(buzzer, HIGH);
  digitalWrite(MoPin, HIGH);         
 delay(1000);       
 digitalWrite(MoPin, LOW);         
 delay(1000); 
}
else{
  digitalWrite(buzzer, LOW);
  digitalWrite(MoPin, LOW);         
 
}
 
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
}
