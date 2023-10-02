const int trigPin = 9;
const int echoPin = 10;
const int buzzerPin = 8;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  int distance = duration / 58.2;  // Convertir le temps en distance en centimètres

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= 20) {
    tone(buzzerPin, 600);  // Émettre un son continu à 600 Hz pour les distances <= 20 cm
  } else if (distance <= 40) {
    tone(buzzerPin, 1500);  // Émettre un bip rapide à 1500 Hz pour les distances entre 20 cm et 40 cm
    delay(100); // Espacement de 100 millisecondes entre les bips
    noTone(buzzerPin);
    delay(100); // Espacement de 100 millisecondes entre les bips
  } else if (distance <= 60) {
    tone(buzzerPin, 800);  // Émettre un bip à 800 Hz pour les distances entre 40 cm et 60 cm
    delay(500); // Espacement de 500 millisecondes entre les bips
    noTone(buzzerPin);
    delay(500); // Espacement de 500 millisecondes entre les bips
  } else {
    noTone(buzzerPin);  // Arrêter le bip
  }
}



