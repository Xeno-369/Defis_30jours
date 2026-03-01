number = int(input("Entre la valeur : "))
somme = 0
for i in range(number + 1) :
    somme += i 
print(f"La somme des entiers inferieurs ou égale a {number} est : {somme}")