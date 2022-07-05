int trigPin = 9; //  Define pins.
int echoPin = 8;  
long TIME; // Define a variable of type Long.
long DISTANCE;

void setup(){
  pinMode(trigPin, OUTPUT); //Initalize Trig pin as an output
  pinMode(echoPin,INPUT);  // Initalize Echo pin as an output
  Serial.begin(9600); // Initialize serial.
}
void loop(){
  digitalWrite(trigPin, LOW); // Do not energize trig pin.
  delayMicroseconds(5); 
  digitalWrite(trigPin, HIGH);  // Energize trig pin.
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);   //  Do not energize trig pin.
  TIME= pulseIn(echoPin, HIGH); //  Energize echo pin.
  DISTANCE= (TIME /29.1)/2;  // Calculate distance.  

}
