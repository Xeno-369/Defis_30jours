import math

# --- Les fonctions ---

def f2(n):
    if n < 0: return
    for _ in range(n):
        print("bonjour")

def celsius_to_fahrenheit(celsius):
    return celsius * 1.8 + 32

def puissance(x, y):
    return math.pow(x, y)

def ackermann(m, n):
    if m < 0 or n < 0: return -1
    if m == 0:
        return n + 1
    elif n == 0:
        return ackermann(m - 1, 1)
    else:
        return ackermann(m - 1, ackermann(m, n - 1))

# --- Le Menu ---

while True:
    print("\n========== MENU PRINCIPAL (Python) ==========")
    print("1. Afficher 'Bonjour' N fois")
    print("2. Celsius -> Fahrenheit")
    print("3. Puissance (x^y)")
    print("4. Fonction d'Ackermann")
    print("0. Quitter")
    
    choix = input("Votre choix : ")

    if choix == "1":
        n = int(input("Nombre de répétitions : "))
        f2(n)
    elif choix == "2":
        c = float(input("Température en Celsius : "))
        print(f"=> {c}°C = {celsius_to_fahrenheit(c)}°F")
    elif choix == "3":
        x = float(input("Base (x) : "))
        y = float(input("Exposant (y) : "))
        print(f"=> Résultat : {puissance(x, y)}")
    elif choix == "4":
        m = int(input("Valeur m : "))
        n = int(input("Valeur n : "))
        res = ackermann(m, n)
        print(f"=> A({m}, {n}) = {res}" if res != -1 else "Erreur : Pas de négatifs")
    elif choix == "0":
        print("Au revoir !")
        break
    else:
        print("Option invalide.")