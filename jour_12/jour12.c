#include <stdio.h>
int main() {
    int number, result_number;
    do {
        printf("Vous voulez la table de multiplication de quel nombre ? : ");
        result_number = scanf("%d", &number);

        if (result_number == 0) {
            printf("Saisie incorrecte ! Veuillez entrer un nombre entier\n");
            while (getchar() != '\n'); 
        }
    } while (result_number == 0); 

    printf("\n========== Table de multiplication de %d ==========\n", number);
    
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}