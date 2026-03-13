#include <stdio.h>
#include <string.h>

// 1. Définition des structures
typedef struct {
    char matiere[20];
    float note;
} Matiere;

typedef struct {
    char nom[50];
    char filiere[30];
    Matiere notes[3]; // Tableau de 3 structures "Matiere"
    float moyenne;
    char statut[10];
} Etudiant;

int main() {
    Etudiant classe[100]; 
    int nbEtudiants = 0;
    int choix;

    do {
        printf("\n--- MENU GESTION C ---");
        printf("\n1. Ajouter etudiant\n2. Afficher liste\n3. Quitter\nChoix: ");
        scanf("%d", &choix);

        if (choix == 1) {
            printf("Nom: "); scanf("%s", classe[nbEtudiants].nom);
            printf("Filiere: "); scanf("%s", classe[nbEtudiants].filiere);

            float somme = 0;
            char* nomsMatieres[] = {"Maths", "Algo", "Anglais"};

            for(int i = 0; i < 3; i++) {
                strcpy(classe[nbEtudiants].notes[i].matiere, nomsMatieres[i]);
                printf("Note en %s: ", nomsMatieres[i]);
                scanf("%f", &classe[nbEtudiants].notes[i].note);
                somme += classe[nbEtudiants].notes[i].note;
            }

            classe[nbEtudiants].moyenne = somme / 3;
            strcpy(classe[nbEtudiants].statut, (classe[nbEtudiants].moyenne >= 10) ? "Admis" : "Ajourne");
            
            nbEtudiants++;
            printf("Etudiant ajoute !\n");
        } 
        else if (choix == 2) {
            printf("\n%-15s | %-15s | %-10s | %s\n", "NOM", "FILIERE", "MOYENNE", "STATUT");
            for(int i = 0; i < nbEtudiants; i++) {
                printf("%-15s | %-15s | %-10.2f | %s\n", 
                    classe[i].nom, classe[i].filiere, classe[i].moyenne, classe[i].statut);
            }
        }
    } while (choix != 3);

    return 0;
}
