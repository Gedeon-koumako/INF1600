#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char** argv) {
   int taille = 0;
   int valeur = 0;
   int nbElement = 0;
   int* pointeurCalloc; // Utilisez calloc ou malloc
   int* pointeurMalloc; // Utilisez calloc ou malloc

   // Complétez le programme à partir d'ici
   printf("Entrer le nombre d'elements que doit contenir un tableau");
   scanf("%d",&taille);
   pointeurMalloc = malloc(2* taille*sizeof(int) + 1);

   for(int i = 0; i < taille; i++)
   {
      scanf("%d",&valeur);
      if(valeur != -1){
         pointeurMalloc[i] = valeur;
         nbElement = i + 1;
      }else{ 
         break;
      }
   }

   for(int j = 0; j < nbElement; j++){
      printf("Valeur %d : %d\n",j,pointeurMalloc[j]);
   }

   free(pointeurMalloc);
   // Ne pas modifier le programme après cette ligne
   return 0;
}


