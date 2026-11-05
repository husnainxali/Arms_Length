const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 11;
const int ledPin = 13;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  if (distance <= 35 && distance > 0) {
    tone(buzzer, 2000);   // 2kHz tone — near piezo resonance, loudest
    digitalWrite(ledPin, HIGH);
  } else {
    noTone(buzzer);
    digitalWrite(ledPin, LOW);
  }

  Serial.print("Distance: ");
  Serial.println(distance);
}
