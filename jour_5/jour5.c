#include<stdio.h>
int jour, heure, minute, seconde = 0;
int main(){
int temps_s, rest_sec;
    do {
        printf("Entrez la valeur de temps en seconde : ");
        scanf("%d",&temps_s);
        if (temps_s < 0){
            printf("Ceci n'est pas un nombre. recommencez\n");
        }
    }while(temps_s < 0);
    if (temps_s < 60) 
        seconde = temps_s;
    else if (temps_s >= 60 && temps_s < 3600){
        minute = temps_s / 60;
        seconde = temps_s % 60;
    }    
    else if (temps_s >= 3600 && temps_s < 86400){
        heure = temps_s / 3600;
        rest_sec = temps_s % 3600;
        minute = rest_sec / 60;
        seconde = rest_sec % 60;
    }
    else {
        jour = temps_s / 86400;
        rest_sec = temps_s % 86400;
        heure = rest_sec / 3600;
        rest_sec = rest_sec % 3600;
        minute = rest_sec / 60;
        seconde = rest_sec % 60;
    }
    printf("%d j %d h %d min %d s\n", jour, heure, minute, seconde);
    return 0;
}
