n = int(input("Ingresa un número entero mayor o igual a 2:\n"))
print(f"Los números pares menores o iguales a {n} son:")
while(n >= 2):
    if n % 2 == 0:
        print(n)
        n -= 2
    else:
        n -= 1

    
