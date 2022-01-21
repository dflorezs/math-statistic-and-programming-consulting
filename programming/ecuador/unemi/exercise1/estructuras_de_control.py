import math

class Estructuras_de_control:
    #********************Ejercicio 1*************************************************************************************************
    def ejercicio_1(self):
        print("********************Ejercicio 1************************************************************************************")
       
        fecha = int(input("Digita una fecha en formato ddmmaaaa: "))
       
        año = fecha % 10000

        print(f"El año {año} es bisiesto") if not año % 4 and (año % 100 or not año % 400) else print(f"El año {año} no es bisiesto") 
    #**********************************************************************************************************************************


    #********************Ejercicio 2**************************************************************************************************
    def ejercicio_2(self):
        print("********************Ejercicio 2************************************************************************************")

        num = input("Digita un número entero de 5 digitos: ")

        print(f"El número {num} es capicúa") if num[0] == num[4] and num[1] == num[3] else print(f"El número {num} no es capicúa")  
    #**********************************************************************************************************************************


    #********************Ejercicio 3**************************************************************************************************
    def ejercicio_3(self):
        print("********************Ejercicio 3************************************************************************************")

        horas = int(input("Digita la cantidad de horas: "))
        minutos = int(input("Digita la cantidad de minutos: "))
        segundos = horas * 3600 + minutos * 60

        print(f"La equivalencia de {horas} horas y {minutos} minutos en segundos es: {segundos} segundos")   
    #**********************************************************************************************************************************


    #********************Ejercicio 4**************************************************************************************************
    def ejercicio_4(self):
        print("********************Ejercicio 4************************************************************************************")

        num = int(input("Digite la cantidad de segundos esta debe ser un entero positivo: "))
         
        dias = int(num / 86400)
        num = num % 86400
        horas = int(num / 3600)
        num = num % 3600
        minutos = int(num / 60)
        num = num % 60
        
        if 0 <= num: print(f"la equivalencia es: {dias} dias {horas} horas {minutos} minutos y {num} segundos")
        else: print("El nuúmero ingresado no es mayor que cero")   
    #**********************************************************************************************************************************


    #********************Ejercicio 5**************************************************************************************************
    def ejercicio_5(self):
        print("********************Ejercicio 5************************************************************************************")

        print("Digita 3 numeros enteros positivos: ")
        a = int(input("Digita el primer número: "))
        b = int(input("Digita el segundo número: "))
        c = int(input("Digita el tercer número: "))

        if b < a and a > c:
            if b > c: print(f"El numero mayor es: {a} y el segundo  número mayor es: {b}")
            elif c > b: print(f"El numero mayor es: {a} y el segundo número mayor es: {c}")
            else: print(f"El número mayor es {a} y el segundo mayor no hay puesto que los otros números son iguales")
        
        elif a < b and b > c:
            if a > c: print(f"El numero mayor es: {b} y el segundo número mayor es: {a}")
            elif c > a: print(f"El numero mayor es: {b} y el segundo número mayor es: {c}")
            else: print(f"El número mayor es {b} y el segundo mayor no hay puesto que los otros números son iguales")
        
        elif a < c and c > b:
            if a > b: print(f"El numero mayor es: {c} y el segundo número mayor es: {a}")
            elif b > a: print(f"El numero mayor es: {c} y el segundo número mayor es: {b}")
            else: print(f"El número mayor es {c} y el segundo mayor no hay puesto que los otros números son iguales")
        
        else: print("Los 3 número ingresados son iguales")  
    #**********************************************************************************************************************************

    
    #********************Ejercicio 6**************************************************************************************************
    def ejercicio_6(self):
        print("********************Ejercicio 6************************************************************************************")

        print("*****HORA DE INGRESO*****\nDigita los siguientes datos con respecto a la hora de ingreso al estacionamiento:\n")
        hora_ingreso = int(input("Digita las horas del ingreso: "))
        minutos_ingreso = int(input("Digita los minutos del ingreso: "))
        tipo_ingreso = input("Digita A para AM o P para PM: ")

        print("*****HORA DE SALIDA*****\nDigita los siguientes datos con respecto a la hora de salida del estacionamiento:\n")
        
        data = {1: 13, 2: 14}
        
        hora_salida = int(input("Digita las horas de la salida "))
        minutos_salida = int(input("Digita los minutos de la salida: "))
        tipo_salida = input("Digita A para AM o P para PM: ")

        tiempo = abs(hora_salida - hora_ingreso)
        horas_extra = 0
        
        flag = True

        while flag:
            menu = int(input("1. Salir del estacionamiento\n2. tomar horas extra\n"))
            
            if menu == 1:
                print(f"El valor a pagar por el estacionamiento es: {(tiempo * 4) + (2 * (horas_extra * 2.50))}")
                flag = False
            elif menu == 2:
                horas_extra = int(input("Digite la cantidad de horas extra que desea permanecer en el estacionamiento: "))
            else: print("ERROR, la opcion ingresada no es valida\n")
    #**********************************************************************************************************************************


    #********************Ejercicio 7**************************************************************************************************
    def ejercicio_7(self):
        print("********************Ejercicio 7************************************************************************************")

        peso = round(float(input("Digita el peso en libras: ")) * 0.453592, 2)
        altura = round(float(input("Digita la altura en centimetros: ")) / 100, 2)
        IMC = round(peso / math.pow(altura, 2), 2)

        if IMC < 16: print(f"peso(kg): {peso}\nIMC: {IMC}\nCategoria: Criterio de ingreso")
        elif 16 <= IMC < 16.9: print(f"peso(kg): {peso}\nIMC: {IMC}\nCategoria: Infra peso")
        elif 17 <= IMC < 18.4: print(f"peso(kg): {peso}\nIMC: {IMC}\nCategoria: Bajo peso")
        elif 18.5 <= IMC <= 24.9: print(f"peso(kg): {peso}\nIMC: {IMC}\nCategoria: Peso normal")
        elif 25 <= IMC <= 29.9: print(f"peso(kg): {peso}\nIMC: {IMC}\nCategoria: Sobre peso")
        elif 30 <= IMC <= 34.9: print(f"peso(kg): {peso}\nIMC: {IMC}\nCategoria: Obesidad pre-mórbida")
        elif 40 <= IMC <= 45: print(f"peso(kg): {peso}\nIMC: {IMC}\nCategoria: Obesidad mórbida")
        elif IMC > 45: print(f"peso(kg): {peso}\nIMC: {IMC}\nCategoria: Obesidad híper-mórbida")
    #**********************************************************************************************************************************


    #********************Ejercicio 8**************************************************************************************************
    def ejercicio_8(self):
        print("********************Ejercicio 8 ************************************************************************************")

        dia = int(input("Digita un dia del año 2014: "))
        mes = int(input("Digita un mes del año 2014 en número, siendo enero = 1 y diciembre = 12: "))

        data = {
            1: 31, 2: 28, 3: 31, 
            4: 30, 5: 31, 6: 30,
            7: 31, 8: 31, 9: 30,
            10: 31, 11: 30, 12: 31,
        }

        if mes == 1: 
            total_dias = dia 
            print(f"La cantidad de dias transcurridos a partir del 1 de enero de 2014 a la fecha ingresada es: {total_dias} dias")
        elif mes == 2:
            total_dias = dia 
            list_keys = list(data.keys())
            for i in range(mes - 1):
                total_dias += data.get(i + 1)
            print(f"La cantidad de dias transcurridos a partir del 1 de enero de 2014 a la fecha ingresada es: {total_dias} dias")
        elif mes == 3:
            total_dias = dia 
            list_keys = list(data.keys())
            for i in range(mes - 1):
                total_dias += data.get(i + 1)
            print(f"La cantidad de dias transcurridos a partir del 1 de enero de 2014 a la fecha ingresada es: {total_dias} dias")
        elif mes == 4:
            total_dias = dia 
            list_keys = list(data.keys())
            for i in range(mes - 1):
                total_dias += data.get(i + 1)
            print(f"La cantidad de dias transcurridos a partir del 1 de enero de 2014 a la fecha ingresada es: {total_dias} dias")
        elif mes == 5:
            total_dias = dia 
            list_keys = list(data.keys())
            for i in range(mes - 1):
                total_dias += data.get(i + 1)
            print(f"La cantidad de dias transcurridos a partir del 1 de enero de 2014 a la fecha ingresada es: {total_dias} dias")
        elif mes == 6:
            total_dias = dia 
            list_keys = list(data.keys())
            for i in range(mes - 1):
                total_dias += data.get(i + 1)
            print(f"La cantidad de dias transcurridos a partir del 1 de enero de 2014 a la fecha ingresada es: {total_dias} dias")
        elif mes == 7:
            total_dias = dia 
            list_keys = list(data.keys())
            for i in range(mes - 1):
                total_dias += data.get(i + 1)
            print(f"La cantidad de dias transcurridos a partir del 1 de enero de 2014 a la fecha ingresada es: {total_dias} dias")
        elif mes == 8:
            total_dias = dia 
            list_keys = list(data.keys())
            for i in range(mes - 1):
                total_dias += data.get(i + 1)
            print(f"La cantidad de dias transcurridos a partir del 1 de enero de 2014 a la fecha ingresada es: {total_dias} dias")
        elif mes == 9:
            total_dias = dia 
            list_keys = list(data.keys())
            for i in range(mes - 1):
                total_dias += data.get(i + 1)
            print(f"La cantidad de dias transcurridos a partir del 1 de enero de 2014 a la fecha ingresada es: {total_dias} dias")
        elif mes == 10:
            total_dias = dia 
            list_keys = list(data.keys())
            for i in range(mes - 1):
                total_dias += data.get(i + 1)
            print(f"La cantidad de dias transcurridos a partir del 1 de enero de 2014 a la fecha ingresada es: {total_dias} dias")
        elif mes == 11:
            total_dias = dia 
            list_keys = list(data.keys())
            for i in range(mes - 1):
                total_dias += data.get(i + 1)
            print(f"La cantidad de dias transcurridos a partir del 1 de enero de 2014 a la fecha ingresada es: {total_dias} dias")
        elif mes == 12:
            total_dias = dia 
            list_keys = list(data.keys())
            for i in range(mes - 1):
                total_dias += data.get(i + 1)
            print(f"La cantidad de dias transcurridos a partir del 1 de enero de 2014 a la fecha ingresada es: {total_dias} dias")
        else: print("Error el año ingresado no es valido, el año debe ser mayor a 1 y menor a 12")  
    #**********************************************************************************************************************************


    #********************Ejercicio 9**************************************************************************************************
    def ejercicio_9(self):
        print("********************Ejercicio 9************************************************************************************")

        mes = int(input("Digita un número entre 1 y 12: "))

        if mes == 1: print("Enero")
        elif mes == 2: print("Febrero")
        elif mes == 3: print("Marzo")
        elif mes == 4: print("Abril")
        elif mes == 5: print("Mayo")
        elif mes == 6: print("Junio")
        elif mes == 7: print("Julio")
        elif mes == 8: print("Agosto")
        elif mes == 9: print("Septiembre")
        elif mes == 10: print("Octubre")
        elif mes == 11: print("Noviembre")
        elif mes == 12: print("Diciembre")
        else: print("Error, el número ingresado esta fuera del rango")
    #**********************************************************************************************************************************


    #********************Ejercicio 10**************************************************************************************************
    def ejercicio_10(self):
        print("********************Ejercicio 10************************************************************************************")

        valor_compra = float(input("Digita el valor de la compra: "))

        if valor_compra > 1000: print(f"El monto a pagar es de: {valor_compra * 0.8}")
        else: print(f"El monto a pagar es de: {valor_compra}")
    #**********************************************************************************************************************************
#creamos un objeto de la clase Estructuras_de_control
ec = Estructuras_de_control()

#Acá llamamos el metodo que deseemos, cada metodo es un ejercicio de la actividad Estructuras de control de flujo de datos
ec.ejercicio_1()
#ec.ejercicio_2()
#ec.ejercicio_3()
#ec.ejercicio_4()
#ec.ejercicio_5()
#ec.ejercicio_6()
#ec.ejercicio_7()
#ec.ejercicio_8()
#ec.ejercicio_9()
#ec.ejercicio_10()
        
                