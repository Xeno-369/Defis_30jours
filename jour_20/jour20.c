#include<stdio.h>
int main(){
    int n, m, c1, c2, c3, result_1, result_2, result_3;
    //saisie de la taille de la matrice
    do{
        printf("Entrez le nombre de ligne m de la matrice : ");
        result_1 = scanf("%d",&m);
        while((c1 = getchar()) != '\n' && c1 != EOF);
        printf("Entrez le nombre de colonnes n de la matrice : ");
        result_2 = scanf("%d",&n);
        while((c2 = getchar()) != '\n' && c2 != EOF);
        if (!result_1  || !result_2){
            printf("saisie invalide. Veuillez entrez des nombres\n");
        }
        else if (n <= 0 || m <= 0)
            printf("Entrez des nombres positives : \n");
    }while(n <= 0 || m <=0 || !result_1 || !result_2);
    int matrice[m + 1][n + 1];
    //saisie des valeurs de la matrice
    for(int i = 0; i < m;i++){
        for(int j = 0; j < n; j++){
            do
            {   
                printf("Entrez la valeur de matrice[%d,%d] : \n", i, j);
                result_3 = scanf("%d",&matrice[i][j]);
                while((c3 = getchar()) != '\n' && c3 != EOF);
                if (!result_3)
                    printf("saisie invalide\n");
            }while(!result_3);
        }
    }
    //calcul de la somme de chaque ligne
    //initialisation de la derniére colonne qui doit stocker les sommes 
    for(int i = 0;i < m;i++){
        matrice[i][n] = 0;
        for(int j = 0;j < n; j++){
            matrice[i][n] += matrice[i][j];
        }
    }
    //initialisation de la derniére ligne qui doit stocker les sommes
    for (int j = 0; j < n; j++){
        matrice[m][j] = 0;
        for (int i = 0; i < m; i++){
            matrice[m][j] += matrice[i][j];
        }
    }
    // 5. Calcul de la somme totale (en utilisant les sommes de lignes déjà calculées)
    for(int i = 0; i < m; i++) {
        matrice[m][n] += matrice[i][n];
    }

    // 6. Affichage unique
    matrice[m][n] = 0;
    printf("La somme totale des elements de la matrice est : %d\n", matrice[m][n]);
    return 0;
}