#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// Fonction qui lit deux entiers et les renvoie par pointeurs
void saisie(int *x, int *y) {
    printf("Donne un entier : ");
    scanf("%d", x);
    printf("Donne un entier : ");
    scanf("%d", y);
}

// Exo 1
void produit(int x, int y) {
    int p = x * y;
    printf("Le produit de %d et %d est %d\n", x, y, p);
}

int main() {
    int choix;
    int x, y;

    printf("Menu :\n");
    printf("1. Saisie de deux entiers et calcul du produit\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            saisie(&x, &y);   // Passage des adresses
            produit(x, y);    // Appel avec les valeurs
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }

    return 0;
}

