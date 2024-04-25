int trigPin = 9;
int echoPin = 10;
int buzzPin = 2;

void setup() {
	pinMode(trigPin, OUTPUT);  
	pinMode(echoPin, INPUT);  
  pinMode(buzzPin, OUTPUT);
	Serial.begin(9600);

}

void loop() {
  digitalWrite(trigPin, LOW);  
	delayMicroseconds(2);  
	digitalWrite(trigPin, HIGH);  
	delayMicroseconds(10);  
	digitalWrite(trigPin, LOW); 

  int duration = pulseIn(echoPin, HIGH);  
  int distance = (duration*.0343)/2;  

  if (distance <= 20) {
    digitalWrite(buzzPin, HIGH);
  } else {
    digitalWrite(buzzPin, LOW);
  }

  Serial.print("Distance: ");  
	Serial.println(distance);  
	delay(100);  



}
