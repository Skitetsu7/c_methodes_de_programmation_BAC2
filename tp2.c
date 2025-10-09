#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "produit.h"


// exo 9
int produit(int *a, int *b){
    printf("Donne les deux entier à multiplier: ");
    scanf("%d %d", a, b);
    int resultat = (*a) * (*b);
    printf(" le résultat est: %d\n" , resultat);
    return resultat;
}

// exo 10
void pointeur(){
    int i=10, *p;
    p=&i;
    printf("i=%d\n", i);
    *p = 20;
    printf("i=%d\n", i);

}


int main() {
    int choix;
    while (1) {   // boucle infinie
        printf("\n===== MENU =====\n");
        printf("1.multiplication de deux entiers\n");
        printf("2. \n");
        printf("3. \n");
        printf("4.\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:{
                //Exo 1
                int a, b;
                int resultat = produit(&a, &b);
                break;
            }
            case 2:
                pointeur();
                break;
            case 3: {
                
                break;
            }

            case 4: {
                break;
            }

            case 6: {
                
                break;
            }

            case 7:{
                break;
            }

            case 8: {
                
                break;
            }

            case 0:
                printf("Fin du programme.\n");
                return 0;   // sortie de main -> arrête la boucle
            default:
                printf("Choix invalide.\n");
                break;
        }
    }
}



