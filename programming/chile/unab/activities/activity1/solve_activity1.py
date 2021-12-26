from time import time

def leer_datos():
    lineas = []
    with open('entrada.txt') as fichero:
        for linea in fichero: 
            lineas.append(linea.rstrip()) #Eliminamos el ultimo caracter correspondiente a un salto de linea rStrip()
    return lineas

def Calcular_dias(a, b, c):
    dias = round(c * 4 /(a - b))
    if a-b > 0: 
        return dias 
    else: 
        return -1 
    
def mostrar_datos(salida):
    fichero = open('salida.txt', 'w')
    for i in salida:
        fichero.write(i)
    fichero.close()

#******************************************Programa principal***************************************************************
datos = leer_datos()
salida = []
   
for i in datos:
    dato = i.split(' ')
    cadena = dato[0] + ' ' + dato[1] + ' ' + dato[2] + ' ' 
    
    #Medimos el tiempo que tarda la función en calcular los dias   
    inicio = time()
    dias = Calcular_dias(int(dato[0]), int(dato[1]), int(dato[2]))
    fin = time()
    calcular_tiempo = fin - inicio #Tiempo
       
    cadena += str(dias) + ' ' + str(calcular_tiempo) + '\n'
    salida.append(cadena)
mostrar_datos(salida)   



    