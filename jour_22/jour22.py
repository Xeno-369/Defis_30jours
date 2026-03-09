mot = input("Entrez èun mot : ")
list_mot = list(mot)
estpalindrome = True
if list_mot != list_mot[::-1]:
    estpalindrome = False
if estpalindrome:
    print(f"{mot} est un palindrome\n")
else : 
    print(f"{mot} n'est pas un palindrome\n")
