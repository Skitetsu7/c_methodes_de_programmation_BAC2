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
    for (int *p= tab; p < tab + 5; p++){
        printf("valeur = %d\n", *p);
        printf("adresse = %p\n", p);
        printf("adresse de tab = %p\n", tab);
        if (*p == 0){
            printf("à la position %ld, il y a un 0\n", p - tab + 1);
        }
    }

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
int iNb_jours[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
void modif_nb_jours(){
    for (int *p = iNb_jours; p < iNb_jours + 13; p++){
        int index = p - iNb_jours;
        if (index == 2){
            *p= 28;
        }
        else if (index % 2 == 0 && index <= 7 && index != 2) {
            *p=30;
        }
        else {
            *p = 31; 
        }
        printf("Mois %d : %d jours\n", index, *p);
        }
    }
// exo 14
int iHeures, iMinutes, iSecondes;
void saisie_heure(int iH, int iM, int iS){
    iHeures = iH;
    iMinutes = iM;
    iSecondes = iS;
}
void affiche_heure(){
    printf("Il est %d heure%s %d minute%s %d seconde%s\n",
           iHeures, (iHeures > 1) ? "s" : "",
           iMinutes, (iMinutes > 1) ? "s" : "",
           iSecondes, (iSecondes > 1) ? "s" : "");
}
void tick() {
    iSecondes++;
    if (iSecondes >= 60) {
        iSecondes = 0;
        iMinutes++;
        if (iMinutes >= 60) {
            iMinutes = 0;
            iHeures++;
            if (iHeures >= 24) {
                iHeures = 0;
            }
        }
    }
}


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
        printf("5.change_jours_mois\n");
        printf("6.plus 1sec\n");
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

            case 5: {
                modif_nb_jours();
                break;
            }
            case 6:{
                saisie_heure(23, 59, 58);
                affiche_heure();
                // Incrémentation
                tick();
                affiche_heure();
                // Encore une seconde
                tick();
                affiche_heure();
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



