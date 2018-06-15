#include <dht.h>
dht DHT;

void setup(){
  Serial.begin(9600);
}

void loop(){
  int chk = DHT.read11(8);
  Serial.print(DHT.temperature);
  Serial.print(" ");
  Serial.println(DHT.humidity);
  delay(2000);
}


