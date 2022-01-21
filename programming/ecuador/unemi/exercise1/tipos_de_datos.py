import math

class Tipos_de_datos:
    #********************Ejercicio 4****************************************************************************************
    def ejercicio_4(self):
        print("********************Ejercicio 4************************************************************************************")
        
        num1 = float(input("Digita un número: "))
        num2 = float(input("Digita otro número: "))

        suma = num1 + num2
        resta = num1 - num2
        multiplicacion = num1 * num2
        division = num1 / num2
        modulo = num1 % num2

        print(f"El resultado de operar {num1} con {num2} es:\n")
        print(f"Suma: {suma}\nResta: {resta}\nMultiplicación: {multiplicacion}\nDivisión: {division}\nModulo: {modulo}\n\n\n")
    #***********************************************************************************************************************
    
    
    #********************Ejercicios 5***************************************************************************************
    def ejercicio_5(self):
        print("********************Ejercicio 5************************************************************************************")

        flag = True
      
        while(flag):
            a = float(input("Digita el valor de a: "))
            b = float(input("Digita el valor de b: "))
            c = float(input("Digita el valor de c: "))
            
            if a != 0:
                flag = False
                discriminante = math.pow(b, 2) - 4 * a * c
                x1 = (-1 * b + math.sqrt(discriminante)) / (2 * a)
                x2 = (-1 * b - math.sqrt(discriminante)) / (2 * a)
               
                if discriminante > 0: print(f"La ecuación tiene 2 soluciones x1 = {x1} y x2 = {x2}")
                elif discriminante == 0: print(f"La ecuación tiene 2 soluciones iguales x = x1 = x2 = {x1}")
                else: print("La ecuación no tiene soluciones reales") 
            else: print("Error, el valor del coeficiente a tiene que ser diferenete de cero\n")
    #***********************************************************************************************************************


    #********************Ejercicios 6***************************************************************************************
    def ejercicio_6(self):
        print("********************Ejercicio 6************************************************************************************")
        
        l1 = float((input("Digita el cateto opuesto del triangulo: ")))
        l2 = float((input("Digita el cateto adyacente del triangulo: ")))

        hipotenusa = math.sqrt(math.pow(l1, 2) + math.pow(l2, 2))

        print(f"La hipotenusa del triangulo con cateto opuesto {l1} y cateto adyacente {l2} es: {hipotenusa}")
    #***********************************************************************************************************************


    #********************Ejercicios 7****************************************************************************************
    def ejercicio_7(self):
        print("********************Ejercicio 7************************************************************************************")

        num = int(input("Digita un número entero: "))

        print(0) if num % 2 == 0 else print(1)
    #************************************************************************************************************************


    #********************Ejercicios 9****************************************************************************************
    def ejercicio_9(self):
        print("********************Ejercicio 9************************************************************************************")

        num = input("Digita un número binario de 4 Digitos: ")
        contar_unos = 0
        
        for i in num: 
            if i == "1": contar_unos += 1
        
        print(f"El bit de paridad del número {num} es 1") if contar_unos %2 != 0 else print(f"El bit de paridad del número {num} es 0")
    #************************************************************************************************************************


    #********************Ejercicios 10***************************************************************************************
    def ejercicio_10(self):
        print("********************Ejercicio 10************************************************************************************")

        num = input("Digita un número binario de 4 digitos: ")
        
        decimal = int(num, base = 2)
        
        print(f"La representación decimal del número binario {num} es: {decimal}") 
    #************************************************************************************************************************


    #********************Ejercicios 11***************************************************************************************
    def ejercicio_11(self):
        print("********************Ejercicio 11************************************************************************************")

        num = input("Digita un número de 4 digitos: ")

        print(f"Unidades: {num[3]}\nDecenas: {num[2]}\nCentenas: {num[1]}\nUnidades de mil: {num[0]}")
    #************************************************************************************************************************
        

#creamos un objeto de la clase Tipos_de_datos
tp = Tipos_de_datos()
#Acá llamamos el metodo que deseemos, cada metodo es un ejercicio de la actividad tipos de datos y acciones elementales
tp.ejercicio_4()
#tp.ejercicio_5()
#tp.ejercicio_6()
#tp.ejercicio_7()
#tp.ejercicio_9()
#tp.ejercicio_10()
#tp.ejercicio_11()