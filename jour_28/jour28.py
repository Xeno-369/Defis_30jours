#création de la classe etudiant 
class Etudiant :
    def __init__(self,nom,age,note) : 
        self.nom = nom 
        self.age = age
        self.note = note 
#fonction validation d'entrée des entiers
def valid_int(message,intMin,intMax) : 
    while True : 
        try :
            valeur = int(input(message)) 
            if intMin <= valeur <= intMax :
                return valeur
                break
            print(f"Entrez une valeur entre {intMin} et {intMax}")
        except ValueError : 
            print("saisie invalide")
#fonction validation d'entrée des notes
def valid_float(message,noteMin,noteMax) : 
    while True : 
        try :
            valeur = float(input(message)) 
            if noteMin <= valeur <= noteMax :
                return valeur
                break
            print(f"Entrez une valeur entre {noteMin} et {noteMax}")
        except ValueError : 
            print("saisie invalide")
nombre_etu = valid_int("Entrez le nombre d'etudiant : ", 1, 100)
tab_etu = []
for i in range(nombre_etu) : 
    print(f"     ======= Etudiant N {i + 1} ======\n")
    nom = input("nom : ").strip()
    age = valid_int("age : ", 14,100)
    note = valid_int("note : ", 0, 20)
    tab_etu.append(Etudiant(nom,age,note))
#RECHERCHE D ETUDIANT
nom_recherche = input("\nQuel est le nom de l'etudiant que vous cherchez ? : ")
trouve = False
for i in range(nombre_etu) : 
    if tab_etu[i].nom.lower() == nom_recherche.lower():
            print(f"\n Étudiant trouvé !")
            print(f"   Nom   : {tab_etu[i].nom}")
            print(f"   Age   : {tab_etu[i].age} ans")
            print(f"   Note  : {tab_etu[i].note:.2f}/20")
            trouve = True
            break
    
    
if not trouve:
    print(f"\n Aucun étudiant trouvé au nom de '{nom_recherche}'.")
