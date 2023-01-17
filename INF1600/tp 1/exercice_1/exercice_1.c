#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exercice_1.h"


int pgcd(int val1, int val2) {
   int pgcd = 0;
   // Veuillez compléter la fonction à partir d'ici
   // VOTRE CODE ICI
   int res = 0;
   res = val1%val2;
   while (res!=0) {
      val1=val2; 
      val2=res;
      res = val1%val2;
   }
   
   pgcd = val2;
   // Ne pas modifier le programme après cette ligne
   return pgcd;
}

