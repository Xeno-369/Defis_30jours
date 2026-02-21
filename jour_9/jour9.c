#include<stdio.h>
int main(void){
    float a, b, c;
    printf("==========calcul de la moyenne et mention==========\n");
    do{
        printf("Entrez la premiére note : ");
        scanf("%f",&a);
        printf("Entrez la deuxiéme note : ");
        scanf("%f",&b);
        printf("Entrez la troisiéme note : ");
        scanf("%f",&c);
        if(a < 0 || b < 0 || c < 0)
            printf("note invalide.veuillez réessayer\n");    
    }while(a < 0 || b < 0 || c < 0);
    float moyenne = (a + b + c)/3;
    if (moyenne < 10 && moyenne >= 0) 
        printf("Moyenne : %.2f\nMention : Ajournée.", moyenne);
    else if (moyenne >= 10 && moyenne < 12)  
        printf("Moyenne : %.2f\nMention : passable.",moyenne);
    else if (moyenne >= 12 && moyenne < 14) 
        printf("Moyenne : %.2f\nMention : Assez-bien.",moyenne);
    else if (moyenne >= 14 && moyenne < 16) 
        printf("Moyenne : %.2f\nMention : Bien.",moyenne);
    else if (moyenne >= 16 && moyenne < 19)  
        printf("Trés bien ");
    else if (moyenne >= 19 && moyenne <= 20 )  
        printf("Moyenne : %.2f\nMention : Excellent.",moyenne);
    else 
        printf("Note invalide.\n ");
}