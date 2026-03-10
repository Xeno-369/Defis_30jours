#include <stdio.h>

// Définition de la structure
struct Etudiant {
    char nom[50];
    int age;
    float note;
};

int main() {
    struct Etudiant e1;

    // Remplissage des données
    printf("Nom de l'étudiant : ");
    scanf("%s", e1.nom);
    printf("Âge : ");
    scanf("%d", &e1.age);
    printf("Note : ");
    scanf("%f", &e1.note);

    printf("\nL'étudiant %s a %d ans et une note de %.2f/20\n", e1.nom, e1.age, e1.note);

    return 0;
}