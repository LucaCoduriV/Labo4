/*
 -----------------------------------------------------------------------------------
Nom du fichier : <nom du fichier>.<xxx> (xxx = h ou cpp)
Auteur(s)      : <prénom> <nom>
Date creation  : <jj.mm.aaaa>
Description    : <à compléter>
Remarque(s)    : <à compléter>
Compilateur    : Mingw-w64 g++ 8.1.0
 -----------------------------------------------------------------------------------
 */

 #include <cstdlib>
 #include <iostream>
 #include <array>
 #include <iomanip>
 #include "jeuDeLaVie.h"
 using namespace std;

void afficher(std::array<std::array<char, COLONNES>, LIGNES> tableau){
   for (auto ligne : tableau) {
      for (char col : ligne) {
         cout << setw(3) << col;
      }
      cout << endl;
   }
}
