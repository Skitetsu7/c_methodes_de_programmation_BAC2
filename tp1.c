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

// Exo 2
void permute(int x, int y){
    printf("Avant permutation : x = %d et y = %d\n", x, y);
    int temp;
    temp =x; 
    x=y;
    y= temp;
    printf("Après permutation :x = %d et y = %d\n", x, y);
}

// Exo 3
void pair_impaire(int x){
    printf("%d est ");
    if (x % 2 == 0) {
        printf("pair\n");
    }
    else {
        printf("impair\n");
    }
}

// Exo 4
void croissant() {
    int n, min, max;
    int premier = 1;  // drapeau pour la première saisie

    printf("Entrez une suite d'entiers (0 pour terminer) :\n");

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;  // arrêt quand l’utilisateur entre 0
        }

        if (premier) {
            min = max = n;  // première valeur => initialise min et max
            premier = 0;
        } 
        else {
            if (n < min){
                min = n;
            }
            if (n > max) {
                max = n;}
        }
    }
    printf("min = %d et max = %d\n", min, max);
    if (premier) {
        printf("Aucun nombre saisi.\n");
    }
}

// Exo 5
void diviseurs() {
    int n;
    do {
        printf("Entrez un entier > 1 : ");
        scanf("%d", &n);
    } while (n <= 1);

    printf("Les diviseurs de %d sont : ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int choix;
    int x, y;

    while (1) {   // boucle infinie
        printf("\n===== MENU =====\n");
        printf("1. Saisie de deux entiers et calcul du produit\n");
        printf("2. Permuter deux entiers\n");
        printf("3. Tester si un entier est pair ou impair\n");
        printf("4. Lire une suite d'entiers et afficher le min et le max\n");
        printf("5. Afficher les diviseurs d'un entier\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                saisie(&x, &y);
                produit(x, y);
                break;
            case 2:
                saisie(&x, &y);
                permute(x, y);
                break;
            case 3:
                printf("Donne un entier : ");
                scanf("%d", &x);
                pair_impaire(x);
                break;
            case 4:
                croissant();
                break;
            case 5:
                diviseurs();
                break;
            case 0:
                printf("Fin du programme.\n");
                return 0;   // sortie de main -> arrête la boucle
            default:
                printf("Choix invalide.\n");
                break;
        }
    }
}
