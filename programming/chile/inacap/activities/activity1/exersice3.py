N = int(input("Digite la cantidad de mascotas:\n"))
mascotas = []
numeros = []
mascotas_eliminadas = []

for i in range(N):
    m = input(f"Digite el nombre de la mascota {i+1}: ")
    mascotas.append(m)
    
    #2. Obtener la cantidad de caracteres que posee cada nombre de mascota e ingresar éstos a otra lista de nombres "Números"
    caracteres = len(m) 
    numeros.append(caracteres)

print("\n*****RESULTADOS*****\n\nMASCOTA - NOMBRE")
for i in range(N): print(f"    {i+1}     {mascotas[i]}") #1. Recorrer la lista e imprimirla

#3. Imprimir la lista "Números, sólo aquellos que sean impares."
print("\nNÚMEROS DE CARACTERES IMPARES")
for i in numeros: 
    if i % 2 != 0: 
        print(i, end=" ") 

#4. Calcular e imprimir la lista números en forma inversa
numeros.reverse()
print(f"\n\nLA LISTA DE NÚMEROS DE FORMA INVERSA ES:\n{numeros}")

#5. Eliminar e imprimir de la lista Mascotas aquellos nombres que poseen menos de 7 caracteres
print("\nNOMBRES DE MASCOTAS CON MENOS DE 7 CARACTERES:")
for i in mascotas: 
    if len(i) < 7:
        mascotas_eliminadas.append(i)
for i in mascotas_eliminadas: print(i)



