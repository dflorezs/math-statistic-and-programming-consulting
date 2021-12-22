
def imprimir(n):
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 != 0: print("Guau")
        elif i %  5 == 0 and i % 3 != 0: print("Miaw")
        elif i % 3 == 0 and i % 5 == 0: print("GuauMiaw")
        else: print(i)

def main():
    numero = int(input("Digita un número entero:\n"))
    imprimir(numero)

main()
