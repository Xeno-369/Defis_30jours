#include <stdio.h>
#include <string.h>

// 1. On définit la structure 
struct Etudiant {
    char nom[50];
    int age;
    float note;
}; 

// 2. Le prototype de la fonction
void rechercherEtudiant(struct Etudiant tab[], int n, char nomRecherche[]);

int main(){
    char nom_etu[100];
    int nombre_etu, result1, result2, result3;

    do {
        char c;
        printf("Entrez le nombre d'etudiants : ");
        result1 = scanf("%d", &nombre_etu);
        while ((c = getchar()) != '\n' && c != EOF);
        if (result1 != 1)
            printf("Entrez un nombre valide\n");
        else if(nombre_etu <= 0)
            printf("Entrez un entier positif \n");
    } while (result1 != 1 || nombre_etu <= 0);  

    struct Etudiant tab_etu[nombre_etu];

    // Saisie des data
    for(int i = 0; i < nombre_etu; i++){
        printf("     ======= Etudiant N %d ======\n", i + 1);
        printf("nom : ");
        scanf("%s", tab_etu[i].nom); 
        // À l'intérieur de ta boucle de saisie des étudiants :
        do {
            char c;
            printf("Age : ");
            result2 = scanf("%d", &tab_etu[i].age);
            while ((c = getchar()) != '\n' && c != EOF); // Nettoie le buffer

            if (result2 != 1) {
                printf("Erreur : Veuillez entrer un nombre.\n");
            } else if (tab_etu[i].age < 14 || tab_etu[i].age > 100) {
                printf("Erreur : L'age doit etre compris entre 14 et 100 ans.\n");
            }
        } while (result2 != 1 || tab_etu[i].age < 14 || tab_etu[i].age > 100);
        do{
            char c;
            printf("note : ");
            result3 = scanf("%f", &tab_etu[i].note);
            while((c = getchar()) != '\n' && c != EOF);
            if (result3 != 1) {
                printf("Erreur : Veuillez entrer un nombre.\n");
            } else if (tab_etu[i].note < 0 || tab_etu[i].note > 20) {
                printf("Erreur : La note doit etre compris entre 0 et 20 .\n");
            }
        }while(result3 != 1 || tab_etu[i].note < 0 || tab_etu[i].note > 20);
    }
    //RECHERCHE D ETUDIANT
    printf("\nQuel est le nom de l'etudiant que vous cherchez ? : ");
    scanf("%s", nom_etu);

    rechercherEtudiant(tab_etu, nombre_etu, nom_etu);

    return 0;
}

// 3. Définition de la procédure
void rechercherEtudiant(struct Etudiant tab[], int n, char nomRecherche[]) {
    int trouve = 0;
    for(int i = 0; i < n; i++) {
        if(strcmp(tab[i].nom, nomRecherche) == 0) {
            printf("\nEtudiant trouve : %s, Age: %d, Note: %.2f\n", tab[i].nom, tab[i].age, tab[i].note);
            trouve = 1;
            break;
        }
    }
    if(!trouve) 
        printf("\nAucun etudiant avec ce nom.\n");
}