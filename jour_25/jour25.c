#include <stdio.h>
#include <math.h>

// Prototypes
void f2(int n);
float CelsiusToFahrenheit(float celsius);
double puissance(float x, float y);
long ackermann(long m, long n);

int main() {
    int choix;
    
    do {
        printf("\n          --- MENU PRINCIPAL ---\n");
        printf("1. Afficher 'Bonjour' N fois (f2)\n");
        printf("2. Convertir Celsius en Fahrenheit\n");
        printf("3. Calculer une puissance (x^y)\n");
        printf("4. Calculer la fonction d'Ackermann\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                int n;
                printf("Entrez le nombre de repetitions : ");
                scanf("%d", &n);
                f2(n);
                break;
            }
            case 2: {
                float c;
                printf("Entrez la temperature en Celsius : ");
                scanf("%f", &c);
                printf("%.2f C = %.2f F\n", c, CelsiusToFahrenheit(c));
                break;
            }
            case 3: {
                float x, y;
                printf("Entrez la base (x) : ");
                scanf("%f", &x);
                printf("Entrez l'exposant (y) : ");
                scanf("%f", &y);
                printf("Resultat : %.2f\n", puissance(x, y));
                break;
            }
            case 4: {
                long m, n;
                printf("Entrez m : "); scanf("%ld", &m);
                printf("Entrez n : "); scanf("%ld", &n);
                long res = ackermann(m, n);
                if (res == -1) printf("Erreur : Valeurs negatives !\n");
                else printf("A(%ld, %ld) = %ld\n", m, n, res);
                break;
            }
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide, recommencez.\n");
        }
    } while (choix != 0);

    return 0;
}

// les fonctions

void f2(int n) {
    if (n < 0) return;
    for(int i = 1; i <= n; i++) printf("bonjour\n");
}

float CelsiusToFahrenheit(float celsius) {
    return celsius * (9.0 / 5.0) + 32;
}

double puissance(float x, float y) {
    return pow(x, y);
}

long ackermann(long m, long n) {
    if (m < 0 || n < 0) return -1; 
    if (m == 0) return n + 1;
    else if (n == 0) return ackermann(m - 1, 1);
    else return ackermann(m - 1, ackermann(m, n - 1));
}