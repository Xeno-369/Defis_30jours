#include<stdio.h>
int annee;
int main(){
    printf("Entrez l'année : ");
    scanf("%d", &annee);
    printf(annee % 4 == 0? annee % 100 == 0 ? annee % 400 == 0 ? "cette année est bisextille\n" : "cette année n'est pas bisextille\n" : "cette année est bixectille\n" : "cette année n est pas bisextille \n");
    return 0;
}