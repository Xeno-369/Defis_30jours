#creation de l'enregistrement etudiant
class Etudiant : 
    def __init__(self,nom,age,note) :
        self.nom = nom
        self.age = age 
        self.note = note 
tab_etu = []
while True :
    try :
        nombre_etu = int(input("Entrez le nombre d'etudiants : "))
        if nombre_etu <= 0 : 
            print("Veuillez entrer un nombre positif\n")
        else : 
            break
    except ValueError : 
        print("saisie invalide\n")
#saisie des data des etudiants
for i in range(nombre_etu) : 
    print(f"\n======= Etudiant N {i + 1} =======")
    nom = input("Nom : ")
    age = int(input("Age : "))
    note = float(input("Note : "))
    tab_etu.append(Etudiant(nom,age,note))
