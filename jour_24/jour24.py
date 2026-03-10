def puissance(x, y):
    return x ** y
while True : 
    try:
        x = int(input("Entrez la valeur de x : "))
        y = int(input("Entrez la valeur de y : "))
        result = puissance(x, y)
        print(f"{x} puissance {y} = {result}")
        break 
    except ValueError:
        print("Erreur : Veuillez entrer des nombres entiers valides.")