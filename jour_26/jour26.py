class Etudiant:
    def __init__(self, nom, age, note):
        self.nom = nom
        self.age = age
        self.note = note
# Création et remplissage
nom = input("Nom : ")
age = int(input("Âge : "))
note = float(input("Note : "))
e1 = Etudiant(nom, age, note)
print(f"\nL'étudiant {e1.nom} a {e1.age} ans et une note de {e1.note}/20")