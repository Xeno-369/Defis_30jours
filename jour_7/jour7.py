a = int(input("Entrez la prémiere valeur : "))
b = int(input("Entrez la seconde valeur : "))
c = int(input("Entrez la troisieme valeur : "))
if (a > b and a > c) :
    print(f"le plus grand est {a}")
elif (b > a and b > c) :
    print(f"le plus grand est {b}")
elif (c > a and c > b ) : 
    print(f"le plus grand est {c}")
elif (a == b and a == c) :
    print(f"{a} {b} {c} sont egaux")
