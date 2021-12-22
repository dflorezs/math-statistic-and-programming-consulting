def es_primo(n):
    if n < 2: return False
    i = 2
    while i*i <= n:
        if n%i == 0: return False
        i = i+1
    return True

def main():
    inicio = int(input("Digita el número en el cúal inicial el rango:\n"))
    fin = int(input("Digita el número en el cúal finaliza el rango:\n"))
    numeros_primos = []
    for i in range(inicio, fin + 1):
        if es_primo(i) == True: numeros_primos.append(i)
    print("Los números primos en el rango de {} a {} son:\n".format(inicio, fin))
    for i in numeros_primos: print(i)

main()