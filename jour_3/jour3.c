#include<stdio.h>
int main(){
    int largeur, longueur;
    printf("Entrez respectivement la largeur et la longeur : ");
    scanf("%d %d", &largeur, &longueur);
    printf("le perimetre de ce rectangle vaut : %d\n", (largeur + longueur)*2);
    printf("l'air de ce rectangle vaut : %d\n", largeur*longueur);
    return 0;
}