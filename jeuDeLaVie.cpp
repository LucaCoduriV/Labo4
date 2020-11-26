//
// Created by lucac on 26.11.2020.
//

#include "jeuDeLaVie.h"
#include <array>
#include <algorithm>

using namespace std;

bool etatSuivantCellule(char etatActuel, int nbVivant){
   return (etatActuel == '.' && nbVivant == 3) || (etatActuel == 'X' && (nbVivant == 3 || nbVivant == 2));
}

array<array<char, 11>,10> calculeGenSuivante(const array<array<char, 11>,10>&
   genActu){

   array<array<char, 11>,10> genSuiv{};

   for(size_t i = 0; i < genActu.size(); i++ ){
      for(size_t j = 0; j < genActu.at(i).size(); j++ ){
         if(etatSuivantCellule(genActu.at(i).at(j), 2) ){
            genSuiv.at(i).at(j) = 'X';
         }else{
            genSuiv.at(i).at(j) = '.';
         }
      }
   }
   return genSuiv;
}