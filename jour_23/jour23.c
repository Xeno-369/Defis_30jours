#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char word[100], cipher_word[100],c;
    int result,key;
    printf("======= Caesar cipher =======\n");
    printf("Entrez le mot a chiffré : ");
    fgets(word,sizeof(word),stdin);                    
    do{
        printf("Entrez la clé de chiffrement : ");
        result = scanf("%d",&key);
        //nettoyage du buffer
        while((c = getchar()) != '\n' && c != EOF);
        if (result != 1)
            printf("Entrez un nombe valide pour la clé.\n");
        else if (key < 0 || key > 26)
            printf("Veuillez entrez une clé dans la base 26\n");
    }while(result != 1 || key < 0 || key > 26);
    //iteration caratére par caractére jusqu'a '\0'
    for (int i = 0; word[i] != '\0'; i++){
        if (isupper(word[i]))
            cipher_word[i] = (word[i] + key - 'A') % 26 + 'A';
        else if(islower(word[i]))
            cipher_word[i] = (word[i] + key - 'a') % 26 + 'a';
        else if (!isalpha(word[i]) || word[i] == ' ' || isdigit(word[i]))
            cipher_word[i] = word[i];
        //ajout du caractére nulle pour dire a printf la ou s'arréter
        else if (word[i] == '\n')
            cipher_word[i] = '\0';
    }
    printf("le chiffrement césar de \"%s\" est : \"%s\"\n", word, cipher_word);
    printf("Appuyez sur Entrée pour quitter...");
    getchar();
    return 0;
}