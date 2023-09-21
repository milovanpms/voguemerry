const int trigPin = 5; // Trigger (émission)
const int echoPin = 3; // Echo (réception)


long duree; 
int distance;

void setup() {
    pinMode(trigPin, OUTPUT); 
    pinMode(echoPin, INPUT); 
    Serial.begin(9600) ; 
}
void loop() {
    // Émission d'un signal de durée 10 microsecondes
    digitalWrite(trigPin, LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    // Écoute de l'écho
    duree = pulseIn(echoPin, HIGH);
    // Calcul de la distance
    distance = duree*0.034/2;
    // Affichage de la distance dans le Moniteur Série
    Serial.print("Distance en cm :") ;
    Serial.println(distance) ;
    delay(500); 


}
