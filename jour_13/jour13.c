#include <stdio.h>

int main() { 
    int result, number;
    long fact = 1; 
    do {
        printf("Entrez un entier positif : ");
        result = scanf("%d", &number);

        if (result != 1 || number < 0) {
            printf("Saisie invalide. ");
            if (number < 0 && result == 1) {
                printf("(Le nombre doit etre positif)\n");
            } else {
                printf("(Veuillez taper un nombre)\n");
            }
            // nettoyage du buffer (on vide tout jusqu'au \n)
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            result = 0;
        }
    } while (result != 1);
    // 2. Calcul de la factorielle
    for (int i = 1; i <= number; i++) {
        fact *= i;
    }
    printf("%d! = %ld\n", number, fact);
    return 0;
}