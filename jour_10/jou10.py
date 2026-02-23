age = int(input("Entrez votre âge : "))
sexe = input("Entrez votre sexe (M/F) : ").upper()

# Traitement avec conditions combinées
if age >= 18 and age <= 25:
    print("Résultat : Vous bénéficiez du tarif 'Jeune Adulte'.")

elif age > 60 or (sexe == "F" and age > 55):
    print("Résultat : Vous bénéficiez du tarif 'Sénior'.")
elif age < 18:
    print("Résultat : Vous bénéficiez du tarif 'Enfant'.")
else:
    print("Résultat : Tarif standard appliqué.")