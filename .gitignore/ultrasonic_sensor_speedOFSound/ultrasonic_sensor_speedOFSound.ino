int trigPin = 13;
int echoPin = 11;
float pingTime;
float speedOfSound;
float distance = 0.3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop() {
  
  digitalWrite(trigPin,LOW);
  delay(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  pingTime = pulseIn(echoPin, HIGH);

   speedOfSound = (2*distance)/pingTime*1000000;
   Serial.print("The speed of Sound is = ");
   Serial.print(speedOfSound);
   Serial.println(" m/s");
   delay(1000);

}
