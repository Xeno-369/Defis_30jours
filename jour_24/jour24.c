#include <stdio.h>

//fonction puissance 
double powers(int x, int y) {
    double produit = 1.0;
    for (int i = 1; i <= y; i++) {
        produit = produit * x;
    }
    return produit;
}
//Fonction pour vider le buffer 
void viderBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int nb1, nb2;
    int retour_scan;
    double results;

    do {
        printf("Entrez la valeur de x (positif) : ");
        retour_scan = scanf("%d", &nb1);

        // Si l'utilisateur n'a pas tapé un nombre
        if (retour_scan != 1) {
            printf("Erreur : vous devez entrer un nombre entier.\n");
            viderBuffer(); 
            nb1 = -1;      // On force la condition de boucle
            continue;
        }
        printf("Entrez la valeur de y (positif ou nul) : ");
        retour_scan = scanf("%d", &nb2);
        if (retour_scan != 1) {
            printf("Erreur : vous devez entrer un nombre entier.\n");
            viderBuffer();
            nb2 = -1;
            continue;
        }
        // Vérification des valeurs mathématiques
        if (nb1 <= 0 || nb2 < 0) {
            printf("Erreur : x doit etre > 0 et y doit etre >= 0.\n");
        }
    } while (nb1 <= 0 || nb2 < 0);
    results = powers(nb1, nb2);
    printf("\nResultat : %d ^ %d = %.2f\n", nb1, nb2, results);
    return 0;
}