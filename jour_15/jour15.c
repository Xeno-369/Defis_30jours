#include<stdio.h> 
int main(){
    int number;
    printf("Entrez une valeur : ");
    scanf("%d",&number);
    printf("La somme des entiers inférieurs ou égale a %d est : %d\n",number,(number*(number + 1))/2);
    return 0;
}