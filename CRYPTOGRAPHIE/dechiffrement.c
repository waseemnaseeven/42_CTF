def caesar_decrypt(ciphertext, shift):
    return caesar_encrypt(ciphertext, -shift)

ciphertext = input("Entrez le texte à déchiffrer : ")
shift = int(input("Entrez le décalage : "))
plaintext = caesar_decrypt(ciphertext, shift)
print("Texte déchiffré : " + plaintext)
