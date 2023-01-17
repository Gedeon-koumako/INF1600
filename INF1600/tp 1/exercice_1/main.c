#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "exercice_1.h"

int main(int argc, char** argv) {

   // TODO: Demander à l'utilisateur deux valeurs pour trouver le PGCD entre elles
   // TODO: Appeler la fonction implementée dans le fichier exercice_1.c
   // TODO: Afficher le PGCD calculé

   int val1, val2, res = 0;

   // Compléter le programme à partir d'ici
   scanf("%d",&val1);
   scanf("%d",&val2);
   res = pgcd(val1,val2);
   printf("Le pgcd de val1 et val2 est:%d\n",res);
   // Ne pas modifier le programme après cette ligne
   return 0;
}

