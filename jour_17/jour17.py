while True : 
    try : 
        n = int(input("Entrez la taille du tableau : "))
        if n <= 0 :
            print("Entrez unn nombre positif")
        break
    except ValueError :
        print("Saisie invalid")
tab = []
print("Entrez la valeur de : ")
for i in range(n+1) :
    tab.append(int(input((f"tab[{i}] = "))))
valMIN = tab[0]
for i in range(n + 1) :
    if valMIN > tab[i] : 
        valMIN = tab[i]
valMAX = tab[0]
for i in range(n + 1) : 
    if valMAX < tab[i] : 
        valMAX = tab[i]
print(f"La valeur minimal du tableau est : {valMIN}")
print(f"La valeur maximale du tableau est : {valMAX}\n")