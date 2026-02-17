jour = 0
heure = 0
minute = 0
seconde = 0
while True :
    try  :   
        temps_s = int(input("Entrez la valeur du temps en seconde : "))
        if (temps_s > 0) :
            break
    except ValueError:
        print("Ceci n'est pas un nombre recommencez")
if (temps_s < 60) :
    seconde = temps_s
elif (temps_s >= 60 and temps_s < 3600) : 
    minute = temps_s // 60
    seconde = temps_s % 60
elif (temps_s >= 3600 and temps_s < 86400) : 
    heure = temps_s // 3600
    rest_sec = temps_s % 3600
    minute = rest_sec // 60
    seconde = rest_sec % 60
else :
    jour = temps_s // 86400
    rest_sec = temps_s % 86400
    heure = rest_sec // 3600
    rest_sec = rest_sec % 3600
    minute = rest_sec // 60
    seconde = rest_sec % 60
print(f"{jour} j {heure} h {minute} min {seconde} s")
