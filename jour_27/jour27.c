#include <stdio.h>

// Définition de la structure
struct Etudiant {
    char nom[50];
    int age;
    float note;
};
int main(){
    int nombre_etu, result;
    do {
        char c;
        printf("Entrez le nombre d'étudiants : ");
        result = scanf("%d",&nombre_etu);
        while ((c = getchar()) != '\n' && c != EOF);
        if (result != 1)
            printf("Entrez un nombre valide\n");
        else if(nombre_etu <= 0)
            printf("Entrez un entier positif \n");
    }while (result != 1 || nombre_etu <= 0);  
    struct Etudiant tab_etu[nombre_etu];
    //saissie des data
    for(int i = 0; i < nombre_etu; i++){
        printf("     =======Etudiant N %d ======\n", i + 1);
        printf("nom : ");
        scanf("%s",&tab_etu[i].nom);
        printf("\nage : ");
        scanf("%d",&tab_etu[i].age);
        printf("\nnote : ");
        scanf("%f",&tab_etu[i].note);
    }
    return 0;
}