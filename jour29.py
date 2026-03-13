#fo'ction pour le calcul de la moyenne
def calculer_moyenne(liste_notes):
    if not liste_notes:
        return 0
    return sum(liste_notes) / len(liste_notes)
#fonction piir verifier admission 
def verifier_admission(moyenne):
    return "Admis" if moyenne >= 10 else "Ajourné"
#fonction pro'ciplaed 
def main():
    classe = []
    
    while True:
        print("\n--- MENU DE GESTION SCOLAIRE ---")
        print("1. Ajouter un étudiant")
        print("2. Afficher la liste des étudiants")
        print("3. Quitter")
        
        choix = input("Votre choix : ")

        if choix == "1":
            # SAISIE DES DONNeES 
            nom = input("Nom de l'étudiant : ")
            filiere = input("Filière : ")
            
            notes = []
            matieres = ["Maths", "Algo", "Anglais"]
            
            print(f"Saisie des notes pour {nom} :")
            for mat in matieres:
                note = float(input(f"  Note en {mat} : "))
                notes.append(note)
            moy = calculer_moyenne(notes)
            statut = verifier_admission(moy)
            
            #  STOCKAGE 
            etudiant = {
                "nom": nom,
                "filiere": filiere,
                "notes": notes,
                "moyenne": moy,
                "statut": statut
            }
            classe.append(etudiant)
            print(f"\n✅ Étudiant {nom} ajouté avec succès !")

        elif choix == "2":
            # AFFICHAGE DES RÉSULTATS 
            if not classe:
                print("\nLa liste est vide.")
            else:
                print("\n" + "="*60)
                print(f"{'NOM':<15} | {'FILIÈRE':<15} | {'MOYENNE':<10} | {'RÉSULTAT'}")
                print("-" * 60)
                for etu in classe:
                    print(f"{etu['nom']:<15} | {etu['filiere']:<15} | {etu['moyenne']:<10.2f} | {etu['statut']}")
                print("="*60)

        elif choix == "3":
            print("Fin du programme.")
            break
        else:
            print("Choix invalide, réessayez.")


if __name__ == "__main__":
    main()
