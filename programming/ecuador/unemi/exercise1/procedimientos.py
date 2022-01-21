import math

class Procedimientos:
    #********************Ejercicio 1*************************************************************************************************
    def ejercicio_1(self):
        def promedio(s:int, t:int) -> float:
            return s / t
        
        #Funcíón Principal
        def main():
            print("********************Ejercicio 1************************************************************************************")

            flag = True
            edades = 0
            contar_edades = 0
            
            print("*****MENU PRINCIPAL*****\nElige una de las siguientes opciones:\n")
            
            while flag:
                menu = int(input("1.Ingresar edades\n2. Salir\n"))

                if menu == 1:
                    edad = int(input("Digita una edad: "))
                    
                    if edad > 18:
                        edades += edad
                        contar_edades += 1
                
                elif menu == 2:
                    if contar_edades > 0: 
                        print(f"El promedio de las edades ingresadas es: {promedio(edades, contar_edades)}")
                        flag = False
                    
                    else: print("Tienes que ingresar almenos una edad mayor de 18 años")
                
                else: print("ERROR, opción invalida")
        
        #LLamado de la Función principal
        main()
    #**********************************************************************************************************************************


  #********************Ejercicio 2*************************************************************************************************
    def ejercicio_2(self):
        def eleva(b:float, e:float):
            return b ** e
        
        #Función principal
        def main():
            print("********************Ejercicio 2************************************************************************************")
            
            base = float(input("Digita la base: "))
            exponente = float(input("Digita el exponente: "))
            
            print(f"El resultado de elevar el número {base} al exponente {exponente} es: {eleva(base, exponente)}")

        #LLamamos a la función principal
        main()  
    #**********************************************************************************************************************************


    #********************Ejercicio 3*************************************************************************************************
    def ejercicio_3(self):
        def calcular_perimetro_pentagono(l1:float, l2:float, l3:float, l4:float, l5:float):
            return l1 + l2 + l3 + l4 + l5
        
        #Función principal
        def main():
            print("********************Ejercicio 3************************************************************************************")
            
            lado1 = float(input("Digita el lado1 del pentagono: "))
            lado2 = float(input("Digita el lado2 del pentagono: "))
            lado3 = float(input("Digita el lado3 del pentagono: "))
            lado4 = float(input("Digita el lado4 del pentagono: "))
            lado5 = float(input("Digita el lado5 del pentagono: "))

            print(f"El perimetro del pentagono de lados: {lado1}, {lado2}, {lado3}, {lado4} y {lado5} es: {calcular_perimetro_pentagono(lado1, lado2, lado3, lado4, lado5)}")

        #LLamamos a la función principal
        main()  
    #**********************************************************************************************************************************


  #********************Ejercicio 4*************************************************************************************************
    def ejercicio_4(self):
            def calcular_pago_semanal(p_h:list, h:list) -> list:
                pagos_semanales = []
                for i in range(5):
                    if h[i] <= 40: pagos_semanales.append(p_h[i] * h[i])
                    else: pagos_semanales.append(p_h[i] * 40)
                return pagos_semanales

            def calcular_pagos_horas_extras_semanales(p_h:list, h:list) -> list:
                pagos_semanales_horas_extra = []
                for i in range(5):
                    if h[i] > 40: pagos_semanales_horas_extra.append((h[i] - 40) * (p_h[i] * 1.35))
                    else: pagos_semanales_horas_extra.append(0)
                return pagos_semanales_horas_extra
            
            def calcular_horas_extras(h:list) -> list:
                valores_h_e = []
        
                for i in range(5):
                    if h[i] <= 40: valores_h_e.append(0)
                    else: valores_h_e.append(h[i] - 40)
                return valores_h_e

            def mostrar_informacion(c_s_s:list, c_p_s:list, e:list, p_h: list, p_h_e: list, h:list):
                print("*****INFORMEDE RESULTADOS*****\n")
                print("EMPLEADO  HORAS SEMANALES  HORAS EXTRAS  PAGO SEMANAL  PAGO HORAS EXTRAS TOTAL DEVENGADO\n")
                
                for i in range(5):
                    if h[i] <= 40:print(f"{e[i]}  {h[i]}  {0}  {c_s_s[i]}  {c_p_s[i]} {c_s_s[i] + c_p_s[i]}\n")
                    else: print(f"{e[i]}  {h[i]}  {h[i] - 40}  {c_s_s[i]}  {c_p_s[i]} {c_s_s[i] + c_p_s[i]}\n")

            #Función principal
            def main():
                print("********************Ejercicio 4************************************************************************************")
                
                empleados = []
                pagos_hora = []
                horas = []

                for i in range(5):
                    empleado = input(f"Digite el nombre del empleado {i + 1}: ")
                    empleados.append(empleado)
                    pago_hora = float(input(f"Digite el pago por hora del empleado {i + 1}: "))
                    pagos_hora.append(pago_hora)
                    hora = int(input(f"Digite las horas que el empleado {i + 1} trabajo a la semana: "))
                    horas.append(hora)
                
                pagos_semanales = calcular_pago_semanal(pagos_hora, horas)
                pagos_horas_extras = calcular_pagos_horas_extras_semanales(pagos_hora,horas)
                horas_extras = calcular_horas_extras(horas)
                mostrar_informacion(pagos_semanales, pagos_horas_extras, empleados, pagos_hora, horas_extras, horas)

            #LLamamos a la función principal
            main()  
    #**********************************************************************************************************************************


    #********************Ejercicio 5*************************************************************************************************
    def ejercicio_5(self):
        def millas_a_kilometros(d:list) -> list:
            distancias_kilometros = []
            for i in range(4):
                distancias_kilometros.append(d[i] * 1.60935)
            return distancias_kilometros
            
        def mostrar_información(c_o:list, c_d:list, d_k:list):
            for i in range(4): print(f"Entre la Ciudad {c_o[i]} y la Ciudad {c_d[i]} hay {d_k[i]} Km\n")
        
        #Función principal
        def main():
            print("********************Ejercicio 4************************************************************************************")
            
            ciudades_de_origen = []
            ciudades_de_destno = []
            distancias_millas = []

            for i in range(4):
                ciudad_origen = input("Digite el nombre de la ciudad de origen: ")
                ciudades_de_origen.append(ciudad_origen)
                ciudad_destino = input("Digite el nombre de la ciudad de destino: ")
                ciudades_de_destno.append(ciudad_destino)
                distancia_millas = float(input("Digita la distancia entre ambas ciudades: "))
                distancias_millas.append(distancia_millas)
            
            d_kilometros = millas_a_kilometros(distancias_millas)
            mostrar_información(ciudades_de_origen, ciudades_de_destno, d_kilometros)
    
        #LLamamos a la función principal
        main()  
    #**********************************************************************************************************************************
#creamos un objeto de la clase Procedimientos
p = Procedimientos()

#Acá llamamos el metodo que deseemos, cada metodo es un ejercicio de la actividad Procedimientos (Acciones y Funciones)
p.ejercicio_1()
#p.ejercicio_2()
#p.ejercicio_3()
#p.ejercicio_4()
#p.ejercicio_5()