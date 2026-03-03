#include<stdio.h>
int main(){
    int taille,result,c;
    do {
        printf("Veuillez saisier la taille du tableau : ");
        result = scanf("%d",&taille);
        while((c = getchar()) != '\n' && c != EOF);
        if (result == 0)
            printf("Saisie invalid\n");
        else if (taille <= 0)
            printf("Veuillez entrer un nombre positif\n");
    }while(result == 0 || taille <= 0);
    int tab[taille];
    printf("Entrez la valeur de : \n");
    for (int i = 0; i < taille; i++){
        printf("tab[%d] = ",i);
        scanf("%d",&tab[i]);
    }
    for (int i = 0;i < taille;i++){
        for(int j = 0;j < taille - i -1;j++){
            if (tab[j] > tab[j + 1]){
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }                                             
        }
    }
    printf("[");
    for (int i = 0; i < taille; i++) {
        printf("%d", tab[i]);
        if (i < taille - 1) {
            printf(", ");
        }
    }
    printf("]\n");    
    return 0;
}