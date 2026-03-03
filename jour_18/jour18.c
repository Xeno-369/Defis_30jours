#include<stdio.h>
int main (){
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
    for (int i = 0; i < taille; i++){
        int indMin = i;
        for (int j = i + 1; j < taille; j++){
            if (tab[j] < tab[indMin])
                indMin = j;
        } 
        int temp = tab[indMin];
        tab[indMin] = tab[i];
        tab[i] = temp;
        
    }
    printf("le tableau trié : \n");
    for (int i = 0; i < taille ; i++){
        printf("tab[%d] = %d\n",i,tab[i]);
    }
    return 0;
}