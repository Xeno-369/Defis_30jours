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

for i in range(taille):
    indMin = i
    for j in range(i + 1, taille):
        if tab[j] < tab[indMin]:
            indMin = j
    
    tab[i], tab[indMin] = tab[indMin], tab[i]

print("le tableau trié : ")
for i in range(taille):
    print(f"tab[{i}] = {tab[i]}")