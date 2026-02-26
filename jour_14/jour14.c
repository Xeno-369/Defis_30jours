#include <stdio.h>
int fibonacci(int nb) {
    if (nb == 0) {
        return 0;
    } else if (nb == 1) {
        return 1;
    }
    return fibonacci(nb - 1) + fibonacci(nb - 2);
}
int main() {
    int number;
    printf("Entrez le nombre : ");
    if (scanf("%d", &number) != 1) {
        printf("Erreur de saisie.\n");
        return 1;
    }
    for (int i = 0; i <= number; i++) {
        printf("%d\n", fibonacci(i));
    }
    return 0;
}