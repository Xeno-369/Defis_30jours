while True :
    try :
        n = int(input("Veuillez saisir la taille du tableau : "))
        if n <= 0 :
            print("Entrez un nombre positif")
        break
    except ValueError :
        print("saisie invalid")
tab = []
for i in range(n) : 
    tab.append(input(f"tab[{i}] : "))
print("les elements du tableau sont : \n")
for i in  range(n) : 
    print(f"tab[{i}] = {tab[i]}")