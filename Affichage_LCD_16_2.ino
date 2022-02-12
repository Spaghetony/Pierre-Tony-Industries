// Inclut la bibliothèque:
#include <LiquidCrystal.h>
// Crée un objet LCD. Paramètres: (RS, E, D4, D5, D6, D7):
LiquidCrystal lcd = LiquidCrystal ( 2, 3, 4, 5, 6, 7 ) ;

void setup() {
  // put your setup code here, to run once:
// Spécifiez le nombre de colonnes et de lignes de l’écran LCD. Passez à (20, 4) pour un écran LCD 20×4:
lcd. commencer ( 16, 2 ) ;


}

void loop() {
  // put your main code here, to run repeatedly:
boucle void ()  {
 // Positionne le curseur sur la troisième colonne et la première ligne, le comptage commence à 0:
lcd. setCursor ( 2, 0 ) ;
 // Affiche la chaîne ‘Hello World!’:
lcd. print ( “Hello World!” ) ;
 // Positionne le curseur sur la troisième colonne et la deuxième ligne:
lcd. setCursor ( 2, 1 ) ;
 // Affiche la chaîne ‘LCD tutorial’:
lcd. impression ( “tutoriel LCD” ) ;
}
}
