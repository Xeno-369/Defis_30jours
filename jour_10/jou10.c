#include <stdio.h>
#include <ctype.h>

int main() {
    int age;
    char sexe;

    printf("Entrez votre âge : ");
    scanf("%d", &age);
    printf("Entrez votre sexe (M/F) : ");
    scanf(" %c", &sexe);
    sexe = toupper(sexe);

    // Conditions combinées 
    if (age >= 18 && age <= 25) {
        printf("Résultat : Tarif 'Jeune Adulte'.\n");
    } 
    else if (age > 60 || (sexe == 'F' && age > 55)) {
        printf("Résultat : Tarif 'Sénior'.\n");
    } 
    else if (age < 18) {
        printf("Résultat : Tarif 'Enfant'.\n");
    } 
    else {
        printf("Résultat : Tarif standard.\n");
    }

    return 0;
}