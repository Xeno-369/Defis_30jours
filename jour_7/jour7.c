#include<stdio.h>
int a,b,c;
int main (void){
    printf("Entrez la premiere valeur : ");
    scanf("%d",&a);
    printf("Entrez la seconde valeur : ");
    scanf("%d",&b);
    printf("Entrez la troisieme valeur : ");
    scanf("%d",&c);
    if (a > b && a > c)
        printf("le plus grand est %d\n", a);
    else if (b > a && b > c)
        printf("le plus grand est %d\n", b);
    else if (c > a && c > b )
        printf("le plus grand est %d\n",c);
    else if (a == b && a == c)
        printf("%d %d %d sont egaux", a, b, c);
}