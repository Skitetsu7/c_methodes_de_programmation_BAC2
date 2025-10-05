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
void recherche_min_max() {
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

// Exo 6
void division_entieres(int x, int y){
    int n=0; 
    int reste = x;
    while (reste>=y){
        reste -= y;
        n++; // est le quotient en sortie
    }
    printf("Le quotient de %d par la division entière de %d est %d\n",x,y, n-1);
    printf("Le reste de la division entière est %d\n", reste);
}
// Exo 7
void multiple(int x, int y) {
    int resultat = 0;

    while (y > 0) {
        if (y % 2 == 1) {
            // si y impair, on ajoute x au résultat
            resultat += x;
            y--;   // on réduit y de 1
            printf("= %d * %d + %d\n", x, y, resultat - x);
        } else {
            // si y pair, on double x et on divise y par 2
            x = 2 * x;
            y = y / 2;
            printf("= %d * %d + %d\n", x, y, resultat);
        }
    }

    printf("Résultat final = %d\n", resultat);
}

//Exo 8
void calculatrice(int x, int y){
    char op;
    printf("Entrez une opération (+, -, *, /) : ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("%d + %d = %d\n", x, y, x + y);
            break;
        case '-':
            printf("%d - %d = %d\n", x, y, x - y);
            break;
        case '*':
            printf("%d * %d = %d\n", x, y, x * y);
            break;
        case '/':
            if (y != 0) {
                printf("%d / %d = %d\n", x, y, x / y);
            } else {
                printf("Erreur : division par zéro.\n");
            }
            break;
        default:
            printf("Opération invalide.\n");
            break;
    }
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
        printf("6. Division entière de deux entiers\n");
        printf("7. Multiplication de deux entiers par additions successives\n");
        printf("8. Calculatrice simple\n");
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
                recherche_min_max();
                break;
            case 5:
                diviseurs();
                break;
            case 6:
                saisie(&x, &y);
                division_entieres(x, y);
                break;
            case 7:
                saisie(&x, &y);
                multiple(x, y);
                break;
            case 8:
                saisie(&x, &y);
                calculatrice(x, y);
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



