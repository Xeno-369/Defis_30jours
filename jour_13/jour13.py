fact = 1
number = -1
while True :
    try :
        while number < 0 :
            number = int(input("Entrez un nombre : "))
            if number < 0 :
                print("Veuillez saisir un nombre positif\n")
        break
    except ValueError :
        print("saisie invalid!")
for i in range(2,number + 1):
    fact *= i  
print(f"{number}! = {fact}")