# saisie de la taille de la matrice
while True:
    try:
        m = int(input("Entrez le nombre de ligne m de la matrice : "))
        n = int(input("Entrez le nombre de colonnes n de la matrice : "))
        if n <= 0 or m <= 0:
            print("Entrez des nombres positives : ")
            continue
        break
    except ValueError:
        print("saisie invalide. Veuillez entrez des nombres")

# Initialisation de la matrice avec une ligne et colonne de plus
matrice = [[0] * (n + 1) for _ in range(m + 1)]

# saisie des valeurs de la matrice
for i in range(m):
    for j in range(n):
        while True:
            try:
                matrice[i][j] = int(input(f"Entrez la valeur de matrice[{i},{j}] : "))
                break
            except ValueError:
                print("saisie invalide")

# calcul de la somme de chaque ligne
# initialisation de la derniére colonne qui doit stocker les sommes 
for i in range(m):
    matrice[i][n] = 0
    for j in range(n):
        matrice[i][n] += matrice[i][j]

# initialisation de la derniére ligne qui doit stocker les sommes
for j in range(n):
    matrice[m][j] = 0
    for i in range(m):
        matrice[m][j] += matrice[i][j]

# 5. Calcul de la somme totale (en utilisant les sommes de lignes déjà calculées)
matrice[m][n] = 0
for i in range(m):
    matrice[m][n] += matrice[i][n]

# 6. Affichage unique
print(f"La somme totale des elements de la matrice est : {matrice[m][n]}")