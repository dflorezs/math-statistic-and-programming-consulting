import math

class Estructuras_iterativas:
    #********************Ejercicio 1*************************************************************************************************
    def ejercicio_1(self):
        print("********************Ejercicio 1************************************************************************************")
       
        num = int(input("Digita un número entero: "))
        
        temp = num
        contador = 0
        
        while temp != 0:
            temp //= 10
            contador += 1
            
        print(f"La cantidad de digitos del número {num} es: {contador}")
    #**********************************************************************************************************************************


    #********************Ejercicio 2*************************************************************************************************
    def ejercicio_2(self):
        print("********************Ejercicio 2************************************************************************************")
       
        num = input("Digita un número: ")

        if len(num) == 1: print(f"El número {num} Es capicúa")
        else:
            comparaciones = 0
            n = len(num) -1
            
            for i in range(int(len(num) / 2)):
                m = i

                if num[m] == num[n]:
                    n -= 1
                    comparaciones += 1
                        
                    if comparaciones == int(len(num) / 2): print(F"El número {num} es capicúa")
                else: print(f"El número {num} no es capicúa") ; break 
    #**********************************************************************************************************************************


    #********************Ejercicio 3*************************************************************************************************
    def ejercicio_3(self):
        print("********************Ejercicio 3************************************************************************************")

        num = int(input("Digita un número entero: "))
        flag = True

        if num < 2: print(f"El número {num} no es primo"); flag = False
        i = 2
        
        while i * i <= num:
            if num % i == 0: print(f"El número {num} no es primo") ; flag = False
            i += 1
        
        if flag: print(f"El número {num} es primo") 
    #**********************************************************************************************************************************


    #********************Ejercicio 4*************************************************************************************************
    def ejercicio_4(self):
        print("********************Ejercicio 4************************************************************************************")

        num = int(input("Digita un número entero: "))

        if num == 0: print(f"El factorial de {num} es: 1")
        elif num > 0:
            f = 1
            for i in range(2, num + 1):
                f *= i
            print(f"El factorial de {num} es: {f}")
        else: print("Error, el número ingresado tiene que se mayor o igual a cero")
    #**********************************************************************************************************************************


    #********************Ejercicio 5*************************************************************************************************
    def ejercicio_5(self):
        print("********************Ejercicio 5************************************************************************************")

        flag = True
        
        while flag:
            contraseña = int(input("Digita un contraseña de almenos 10 digitos: "))
            if 10 <= len(str(contraseña)): flag = False
            else: print("ERROR, La contraseña debe tener almenos 10 digitos\n")
        print(f"La contraseña ha sido ingresada de manera exitosa")

    #**********************************************************************************************************************************


    #********************Ejercicio 6*************************************************************************************************
    def ejercicio_6(self):
        print("********************Ejercicio 6************************************************************************************")

        flag = True
        secuencia = []
        
        while flag:
            num = float(input("Digita un número: "))

            if num != 0: secuencia.append(num)
            else: flag = False
        
        if len(secuencia) != 0:
            mayor = secuencia[0]
            menor = secuencia[len(secuencia) - 1]
            
            for i in secuencia:
                if mayor < i: mayor = i
                if menor > i: menor = i
            
            print(f"De los números ingresados el mayor es {mayor} y el menor es {menor}")
        
        else: print("No hay número mayor ni menor ya que no ingresaste una secuencia de números")        
    #**********************************************************************************************************************************


    #********************Ejercicio 7*************************************************************************************************
    def ejercicio_7(self):
        print("********************Ejercicio 7************************************************************************************")

        flag = True
        edades = []
        pesos = []
        estaturas = []
        persona = 0
        c1 = 0
        c2 = 0
        c3 = 0
        edades_c3 = 0

        while flag:
            print("*****MENU DE OPCIONES*****\nElige alguna de las siguiente opciones:\n")
            menu = int(input("1. Para ingresar datos\n0.Salir\n"))
            
            if menu == 1:
                persona += 1
                edad = int(input(f"Digita la edad de la persona {persona}: "))
                edades.append(edad)
                peso = float(input(f"Digita el peso de la persona {persona} en (Kg): "))
                pesos.append(peso)
                estatura = float(input(f"Digita la estatura de la persona {persona} en (mts): "))
                estaturas.append(estatura)
            
            elif menu == 0:
                if persona != 0:
                    print(f"Edad promedio: {sum(edades) / len(edades)}")
                    print(f"Peso promedio: {sum(pesos) / len(pesos)}")
                    print(f"Estatura promedio: {sum(estaturas) / len(estaturas)}")

                    for i in edades:
                        if 18 <= i and i <= 25: c1 += 1
                        elif i > 36: c2 += 1
                        
                        if 18 <= i and i <= 35:
                            c3 += 1
                            edades_c3 += i
                    
                    print(f"Personas con edad entre los 18 y 25 años: {c1}")
                    print(f"Personas mayores de 36 años: {c2}")
                    
                    if c3 != 0: print(f"Promedio de personas con edades entre 18 y 35 años es: {edades_c3 / c3}")
                    else: print("Promedio de personas con edades entre 18 y 35 años es: 0")
                    
                    flag = False 
                
                else: print("No hay información para mostrar, puesto que la muestra de datos es nula"); flag = False
            
            else: print("ERROR, opción invalida")
    #**********************************************************************************************************************************


    #********************Ejercicio 8*************************************************************************************************
    def ejercicio_8(self):
        print("********************Ejercicio 8************************************************************************************")

        for i in range(1, 11):
            print(F"\n*****TABLA DEL {i}*****")
            for j in range(11):
                print(f"{i} x {j} = {i * j}")      
    #**********************************************************************************************************************************


    #********************Ejercicio 9*************************************************************************************************
    def ejercicio_9(self):
        print("********************Ejercicio 9************************************************************************************")
        numeros = [0, 1, 2, 3, 4, 5, 6]
        for i in numeros:
            if i == 0: print(f"|{i}|{i}| |{i}|{i+1}| |{i}|{i+2}| |{i}|{i+3}| |{i}|{i+4}| |{i}|{i+5}| |{i}|{i+6}|", end =" ")
            elif i == 1: print(f"      |{i}|{i}| |{i}|{i+1}| |{i}|{i+2}| |{i}|{i+3}| |{i}|{i+4}| |{i}|{i+5}|", end =" ")
            elif i == 2: print(f"            |{i}|{i}| |{i}|{i+1}| |{i}|{i+2}| |{i}|{i+3}| |{i}|{i+4}|", end =" ")
            elif i == 3: print(f"                  |{i}|{i}| |{i}|{i+1}| |{i}|{i+2}| |{i}|{i+3}|", end =" ")
            elif i == 4: print(f"                        |{i}|{i}| |{i}|{i+1}| |{i}|{i+2}|", end =" ")
            elif i == 5: print(f"                              |{i}|{i}| |{i}|{i+1}|", end =" ")
            elif i == 6: print(f"                                    |{i}|{i}|", end =" ")
            print("")
            
          
    #**********************************************************************************************************************************



#   ********************Ejercicio 10*************************************************************************************************
    def ejercicio_10(self):
        print("********************Ejercicio 10************************************************************************************")
        flag = True
        suma = 0
        contar_numeros = 0

        while flag:
            num = float(input("Digita un número: "))
            
            if num > 0:
                suma += num
                contar_numeros += 1
            
            elif num == 0: 
                if contar_numeros > 0:
                    print(f"El promedio de la serie de números que ingresaste es: {suma / contar_numeros}")
                    flag = False
                
                else: print("Error, tienes que ingresar almenos un número")
            
            else: print("ERROR, el número ingresado tiene que ser postivo")
    #**********************************************************************************************************************************
#creamos un objeto de la clase Estructuras_iterativas
ei = Estructuras_iterativas()

#Acá llamamos el metodo que deseemos, cada metodo es un ejercicio de la actividad Estructuras iterativas
ei.ejercicio_1()
#ei.ejercicio_2()
#ei.ejercicio_3()
#ei.ejercicio_4()
#ei.ejercicio_5()
#ei.ejercicio_6()
#ei.ejercicio_7()
#ei.ejercicio_8()
#ei.ejercicio_9()
#ei.ejercicio_10()