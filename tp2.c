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

// exo 11
void tableau(){
    int tab[5]={13,23,0,14,0};
    for (int *p = tab; p < tab + 5; p++){
        printf("valeur = %d\n", *p);
        printf("adresse = %p\n", p);
        printf("adresse de tab = %p\n", tab);
        if (*p == 0){
            printf("à la position %ld, il y a un 0\n", p - tab + 1);
        }
    }
    return 0;

}

// exo 12
int iMat[5][5]= {{2,5,23,2,4},{1,0,0,4,5},{3,5,6,2,1},{4,3,2,1,0},{5,4,3,2,1}};
void affiche_matrice(int mat[5][5]){
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

}

// exo 13






// exo 15
// exo 16
// exo 17
// exo 18
// exo 19
int main() {
    int choix;
    while (1) {   // boucle infinie
        printf("\n===== MENU =====\n");
        printf("1.multiplication de deux entiers\n");
        printf("2.modification de i par pointeur\n");
        printf("3.cherche les nulles dans tableaux \n");
        printf("4.matrice\n");
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
                tableau();
                break;
            }
            case 4: {
                affiche_matrice(iMat);
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



