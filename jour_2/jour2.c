#include<stdio.h>
int main(){
    int a, b;
    printf("Entrez la valeurs de a : ");
    scanf("%i", &a);
    printf("Entrez la valeurs de b : ");
    scanf("%i", &b);
    int somme = a + b;
    printf("%i + %i = %i\n", a, b, somme);
    return 0; 
}