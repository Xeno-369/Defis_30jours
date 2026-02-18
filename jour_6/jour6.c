#include<stdio.h>
int number;
int main(){
    printf("Entrez un nombre entier : ");
    scanf("%d",&number);
    if (number % 2 == 0){
        printf("le nombre est pair\n");
    }
    else {
        printf("le nombre est impair\n");
    }
    return 0;
}    