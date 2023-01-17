#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool parite(char valeur);

int main(int argc, char** argv) {
   // Complétez la fonction à partir d'ici
   char valeur;
   scanf("%c",&valeur);
   printf("Valeur %d\n",valeur);
   if(parite(valeur)){
      printf("Nombre de bits de 1 pair\n");
   }else{
      printf("Nombre de bits de 1 impair\n");
   }

   // Ne rien modifier après cette ligne
   return 0;
}

bool parite(char valeur){
   bool parité = false;
   // Complétez la fonction à partir d'ici
   char masque = 0b00000001;
   int count = 0;
   for(int i=0;i<8;i++){
      char valeur_ =  valeur >>  i;
      char valeurMasque = masque & valeur_;
      if(valeurMasque==1){
         count += 1;
      }
   }
   if(count%2==0){
      parité = true;
   }else{
      parité =  false;
   }
   // Ne rien modifier après cette ligne
   return parité;
}