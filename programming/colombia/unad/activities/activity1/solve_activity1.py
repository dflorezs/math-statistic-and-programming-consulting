# Inicializamos un variable booleana en verdadero, la cual permitira dar continuida
# o no al programa
jvm_continuar = True 
#********************************
# Creamos 3 listas las cuales almacenaran los datos de cada registro
# los cuales son el nombre de la universidad, la cantidad de participantes de la universidad 
# y el valor total a pagar de cada universidad
jvm_registro_universidades = [] 
jvm_registro_participantes = []
jvm_registro_valores_a_pagar = []
#******************************************

#********************************************************
# Se muestra un mensaje de  bienvenidad al programa y se solicitan los datos al usuario por medio de un mensaje
print("*****REGISTRO CONCURSO DE PROGRAMACIÓN*****")
print("Por favor ingresa la siguiente información\n")
#********************************************************

jvm_registros = 0 # inicializamos la variable registros en 0, la cual cuenta la cantidad de registros
while(jvm_continuar):# mientra continuar sea veradero solicitan los registros
    jvm_nombre_universidad = input("Nombre universidad: ") # lee el nombre de la univerisidad
    jvm_registro_universidades.append(jvm_nombre_universidad) # guarda el nombre de la universidad en la lista
    #lee el numero de participantes el cual debe ser minimo 1 y maximo 10
    jvm_cantidad_de_participantes = int(input("Cantidad de participantes (minimo1, maximo 10): ")) 
    #se valida que el numero de participantes este en el rango deseado, en caso contrario vuelve y se piden el dato
    while(jvm_cantidad_de_participantes <= 0 or jvm_cantidad_de_participantes > 10):
        #Se le recuerda al usuario el rango en el que debe estar el numero de participantes
        print("La cantidad departicipantes debe estar entre 1 y 10")
        # Se lee de nuevo la el numero de participantes
        jvm_cantidad_de_participantes = int(input("Cantidad de participantes (minimo1, maximo 10): "))
    # Se guarda el numero de participanes en la lista que almacena la cantidad de participantes
    jvm_registro_participantes.append(jvm_cantidad_de_participantes)
    # se valida el descuento, esto es cuando la cantidad de participantes sea mayor a 5 se descuenta el 10% del valor 
    if 5 < jvm_cantidad_de_participantes:
        jvm_valor_a_pagar = (jvm_cantidad_de_participantes*20000)*0.9# valor a pagar con decuento
        jvm_registro_valores_a_pagar.append(jvm_valor_a_pagar)# se guarda el valor a pagar en la lista de valores 
    else:
        jvm_valor_a_pagar = jvm_cantidad_de_participantes*20000 # valor a pagar sin descuento
        jvm_registro_valores_a_pagar.append(jvm_valor_a_pagar)# se guarda el valor a pagar en la lista de valores
    # se le indica al usuraio si desea agrrgar otro registro o si desea salir del sistema
    jvm_opcion = int(input("Digita 1) para ingresar mas informacion o 0) para salir\n"))
    #se valida que la opcion ingresda por el usuario se igual a la que se le solicita
    while(jvm_opcion != 0 and jvm_opcion != 1):
        print("opcion invalida")# se le indica al usuraio que la opcion ingreasa no es valida
        # se lee de nuevo la opciion hasta que el usuraio digte la correcta
        jvm_opcion = int(input("Digita 1) para ingresar mas informacion o 0) para salir\n"))
    # se valida si el usario quiere salir
    if jvm_opcion == 0:
        jvm_continuar = False# se cambia el valor de la variable continuar a false y con esto sale del sistema
    
    jvm_registros += 1# se cuenta la cantidad de registro ingresados
# se impirmen la informacion solicitada en pantalla
print("UNIVERSIDAD\tVALOR A PAGAR")
for i in range(jvm_registros):# iera sobre cada registro y el i ndice apunta a cada posicion de los registros
    #se imprimen los datos nombre de uiverisidad y valor apagar de cada registro hasta recorrer todos lso registros 
    print(f"{jvm_registro_universidades[i]}\t\t\t{jvm_registro_valores_a_pagar[i]}") 








    
    
        
