number = int(input("Entrez le nombre : "))
def fibonacci(nb):
    if nb == 0 :
        return 0
    elif nb == 1 : 
        return 1
    return fibonacci(nb - 1) + fibonacci(nb - 2)
for i in range(number + 1):
    print(f"{fibonacci(i)}")