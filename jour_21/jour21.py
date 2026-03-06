mot = input("Entrez un mot : ")
nb_lettre = 0
for char in mot:
    if char != ' ':
        nb_lettre += 1
print(f"Le mot {mot} contient {nb_lettre} lettre")