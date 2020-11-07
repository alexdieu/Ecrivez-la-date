#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
 
 
 
int main (){        
    int jour = 0, mois = 0, annee = 0;
    int jour_modif = 1, mois_modif = 1, annee_modif = 0;
    int date_finale = 0;
    ///// Date /////
    printf("GENERATEUR DE DATE\n"); 
    printf("Le jour : "); scanf("%d", &jour);
 
    while (jour > 31){
 
      printf("Il y a 28 ou 29 ou 30 ou 31 jours dans 1 mois \n"); printf("Recommence \n");
      printf("Jour : "); scanf("%d", &jour);
    }
 
    printf("Mois : "); scanf("%d", &mois);
    while (mois > 12){
      printf("Il y a 12 mois dans une année \n Recommence ...\n");
      printf("Mois : "); scanf("%d", &mois);
    }
 
    if (jour == 31){      
 
      while(mois == 02 || mois == 04 || mois == 06 || mois == 9 || mois == 11){
        printf("Impossible il ne peut pas y avoir 31 jours dans ce mois \n Recommence .... \n");
        printf("Mois : "); scanf("%d", &mois);
      }
    }
    if (jour  == 30 || jour == 31){
 
      while(mois == 02){
        printf("Il y a maximum 29 jours dans le mois de fevrier \n Recommence ...\n"); 
        printf("Mois : "); scanf("%d", &mois);
      }
    }
 
  printf("Annee : "); scanf("%d", &annee);
 
  while (annee > 2021){
    printf("Bon attends un peu ... Chuis pas un programme depasse au moins ?\n");
    printf("Annee : "); scanf("%d", &annee);
  }
  if(annee < 1900){
  	while (annee < 1900){
  		printf("C'est trop vieux lol j'existais meme pas ! \n");
  		printf("Annee : "); scanf("%d", &annee);
	  }
    while (annee > 2021){
      printf("Bon attends un peu ... Chuis pas un programme depasse au moins ?\n");
      printf("Annee : "); scanf("%d", &annee);
    }
  }

  printf("Date = %d/%d/%d\n", jour , mois , annee);
  return 0;
 
}
