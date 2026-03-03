import sys

while True:
    try:
        taille = int(input("Veuillez saisir la taille du tableau : "))
        if taille > 0:
            break
        print("Veuillez entrer un nombre positif")
    except ValueError:
        print("Saisie invalide")

tab = []
print("Entrez la valeur de : ")
for i in range(taille):
    tab.append(int(input(f"tab[{i}] = ")))
for i in range(taille - 1) : 
    for j in range(taille - i - 1) : 
        if tab[j] > tab[j + 1] : 
            tab[j],tab[j + 1] = tab[j + 1],tab[j]
print(f"le tableau trié : {tab}")
