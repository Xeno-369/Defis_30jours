#include <stdio.h>
int main() {
    char phrase[50];
    int nb_lettre = 0;
    printf("Entrez une phrase : ");
    // fgets lit jusqu'à la fin de la ligne, espaces compris
    fgets(phrase, sizeof(phrase), stdin);
    for (int i = 0; phrase[i] != '\0'; i++) {
        // On vérifie si c'est une lettre et non un espace ou un retour à la ligne
        if (phrase[i] != ' ' && phrase[i] != '\n') {
            nb_lettre += 1;
        }
    }
    printf("La phrase contient %d lettres (hors espaces).\n", nb_lettre);
    return 0;
}