#define TRIG 9
#define ECHO 10
#define LED 13

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  long duration = pulseIn(ECHO, HIGH);
  int distance = duration * 0.034 / 2;
  
  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < 10) {
    digitalWrite(LED, HIGH);
    Serial.println("Tank Full - Stop Pump");
  } else {
    digitalWrite(LED, LOW);
  }

  delay(2000);
}
