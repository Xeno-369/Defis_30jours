#include<stdio.h> 
int main()
{
    int c, n, result;
    do
    {
        printf("Veuillez saisir la taille du tableau : ");
        result = scanf("%d",&n);
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        if(result == 0 || n <= 0)
            printf("Erreur de saisie. Veuillez entrez un nombre positif.\n");
    }while(result == 0 || n <= 0);
    char tab[n][10];
    for (int j= 0; j < n; j++)
    {
        printf("Saisissez tab[%d] : ",j);
        scanf("%9s",tab[j]);
        int c;
        while((c = getchar()) != '\n' && c != EOF);
    }
    printf("Les élements du tableau sont : \n");
    for(int j= 0; j < n; j++)
        printf("tab[%d] : %s\n",j,tab[j]);
    return 0;
}