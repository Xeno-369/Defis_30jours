#include<stdio.h>
int main(){
    int n,result,c;
    do{
        printf("Entrez la taille du tableau : ");
        result = scanf("%d",&n);
        int c;
        while((c = getchar()) != '\n' && c != EOF);
        if (result == 0 || n <= 0){
            printf("Saisie invalid.Veuillez entrez un nombre positif\n");
        }
    }while(result == 0 || n <= 0 );
    int tab[n];
    printf("Entrez la valeur de : \n");
    for (int i = 0; i < n; i++){
        printf("tab[%d] = ",i);
        scanf("%d",&tab[i]);
    }
    int valMIN = tab[0];
    for ( int i = 1; i < n; i++){
        if (valMIN > tab[i])
            valMIN = tab[i];
    }
    int valMAX = tab[0];
    for (int i = 1; i < n; i++){
        if (valMAX < tab[i])
            valMAX = tab[i];
    }
    printf("La valeur minimal du tableau est : %d\n",valMIN);
    printf("La valeur maximale du tableau est : %d\n",valMAX);
    return 0;
}