#include<stdio.h>
#include<string.h>
int main(){
    char mot[100];
    int estpalindrome = 1;
    printf("Entrez votre mot : ");
    scanf("%s",mot);
    int n = strlen(mot);
    for (int i = 0; i < n / 2; i++){
        if (mot[i] != mot[n - 1 - i])
            estpalindrome = 0;
            break;
    }
    if(estpalindrome)
        printf("%s est un palindrome\n",mot);
    else 
        printf("%s n'est pas un palindrome\n",mot);
    return 0;
}
