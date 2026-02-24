while True :
    try :
        number = int(input("Vous voulez la table de multiplication de quel nombre ? : "))
        break 
    except ValueError :
        print("saisie incorrect")
print(f"========== table de multiplcaion de {number} ==========")
for i in range(1,11):
    print(f"{number} x {i} = {number*i}\n")