N = int(input("Ingrese la cantidad de alumnos:\n"))
peso = []
altura = []
imc = []
sum_imc = 0
imc_normal_bajo = 0
imc_sobrepeso = 0

for i in range(N):
    p = float(input(f"Digita el peso del alumno {i + 1}: "))
    peso.append(p)
    a = float(input(f"Digita la altura del alumno {i + 1}: "))
    altura.append(a)
    calculo_imc = p / a**2
    sum_imc += calculo_imc
    imc.append(calculo_imc)
    if calculo_imc <= 25: imc_normal_bajo += 1
    else: imc_sobrepeso += 1 

print("*****RESULTADOS*****\nAlumno - IMC")
for i in range(N):
    print(f"   {i+1}     {round(imc[i], 2)}")
print(f"Imc Promedio: {round(sum_imc / N, 2)}\nAlumnos con IMC normal bajo: {imc_normal_bajo}\n% Alumnos con IMC con sobrepeso {round(imc_sobrepeso/N*100, 2)} %")
    



