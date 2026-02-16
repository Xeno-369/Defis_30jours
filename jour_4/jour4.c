#include<stdio.h>
int main(){
    int a, b, temp;
    printf("Entrez la valeur de a : ");
    scanf("%d", &a);
    printf("Entrez la valeur de b : ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("la valeur de a est : %d\nla valeur de b est : %d\n", a, b);
    /*Autre methode 
    a = a^b
    b = a^b 
    a = a^b
    printf("la valeur de a est : %d\nla valeur de b est : %d\n", a, b);*/
    return 0;
}