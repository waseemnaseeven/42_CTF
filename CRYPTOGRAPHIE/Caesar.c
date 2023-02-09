def caesar_encrypt(plaintext, shift):
    ciphertext = ""
    for char in plaintext:
        if char.isalpha():
            shift_char = chr((ord(char.upper()) - 65 + shift) % 26 + 65)
            if char.islower():
                shift_char = shift_char.lower()
            ciphertext += shift_char
        else:
            ciphertext += char
    return ciphertext

plaintext = input("Entrez le texte à chiffrer : ")
shift = int(input("Entrez le décalage : "))
ciphertext = caesar_encrypt(plaintext, shift)
print("Texte chiffré : " + ciphertext)
