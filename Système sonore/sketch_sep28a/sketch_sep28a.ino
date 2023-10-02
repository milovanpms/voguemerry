// Déclaration des librairies utilisées
#include <NewPing.h>

// Définition des constantes globales
#define PORT_EMETTEUR   12  // Port Arduino branché à la broche Trig du HC-SR04.
#define PORT_RECEPTEUR  11  // Port Arduino branché à la broche Echo du HC-SR04.
#define DISTANCE_MAX 50 // Distance maximale que sait gérér la capteur HC-SR04.
#define FREQUENCE_DU_BIP 784 // Fréquence qui sera utilisée pour émettre les bips sonores
#define DUREE_BIP 250 // Définit la durée d'un bip en millisecondes
#define DISTANCE_BIP_CONTINU 5 // Définit la proximité à partir de laquelle on a un bip continu

NewPing sonar(PORT_EMETTEUR, PORT_RECEPTEUR, DISTANCE_MAX); // Initialisation de la librairie NewPing.
unsigned long HeureDernierBip_G;

// Fonction de démarrage, s'exécute une seule fois:
void setup()
{
  HeureDernierBip_G = 0;
}
// Fonction principale du programme, s'exécute en boucle:
void loop()
{
  // Variables locale de la fonction
  unsigned long DistanceLue_L;
  unsigned long Delai_L;

  // Valeurs par defaut
  Delai_L = 1000; // Par défaut un bip par seconde

  delay(50);  // Attente de 50ms
  DistanceLue_L = sonar.ping_cm(); // Envoi des ultrasons, écoute de leur réflexion, puis calcul de la distance en centimètres.
  if(DistanceLue_L == 0)
  {
     // Pas d'obstacle détecté
    Delai_L = 1000; // Par défaut un bip par seconde    
  }
  else if(DistanceLue_L < DISTANCE_BIP_CONTINU)
  {
     // On est proche de la collision
    Delai_L = DUREE_BIP; // bip continu    
  }
  else
  {
    Delai_L = (float)DistanceLue_L * (float)(1000 - DUREE_BIP)/(float)(DISTANCE_MAX - DISTANCE_BIP_CONTINU) + DUREE_BIP;  
  }
  
  if(millis()> HeureDernierBip_G + Delai_L)
  {
    HeureDernierBip_G = millis();
    tone(8, FREQUENCE_DU_BIP, DUREE_BIP);
  }
}
