print("==========calcul de la moyenne et mention==========")
while True :
    try :
        a = float(input("Entrez la premiére note : "))
        b = float(input("Entrez la seconde note : "))
        c = float(input("Entrez la troisiéme note : "))
        break
    except ValueError :
        print("entrez invaide réessayer\n")
moyenne = (a + b + c)/3
if (moyenne < 10 and moyenne > 0) :
    print(f"Moyenne : {moyenne}\nMention : Ajournée.")
elif (moyenne >= 10 and moyenne < 12) : 
    print(f"Moyenne : {moyenne}\nMention : passable.")
elif (moyenne >= 12 and moyenne < 14) :
    print(f"Moyenne : {moyenne}\nMention : Assez-bien.")
elif (moyenne >= 14 and moyenne < 16) :
    print(f"Moyenne : {moyenne}\nMention : Bien.")
elif (moyenne >= 16 and moyenne < 19) : 
    print("Trés bien ")
elif (moyenne >= 19 and moyenne <= 20 ) : 
    print(f"Moyenne : {moyenne}\nMention : Excellent.")
else :
    print("Note invalide.")