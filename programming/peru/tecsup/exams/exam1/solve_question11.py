def generar_diccionario():
    diccionario_digital = {
        'apple' : 'manzana',
        'dog' : 'perro',
        'cat' : 'gato',
        'tiger' : 'tigre',
        'cinema' : 'cine',
        'nurse' : 'enfermera',
        'guitar' : 'guitarra',
        'car' : 'carro',
        'flute' : 'flauta',
        'bike' : 'bicicleta'
    }
    return diccionario_digital
    

def main():
    d = generar_diccionario()
    opc = int(input("****TRADUCTOR*****\n1. Ingles -> Español\n2. Español -> Ingles"))
    while opc != 0:
        if opc == 1: 
            palabras_en_ingles = d.keys()
            print("****PALABRAS****")
            for i in palabras_en_ingles: print(i)
            palabra_en_ingles = input("Digita la palabra que deseas traducir a español\n")
            print(f"La palabra ingresada fue: {palabra_en_ingles} y su traducción a español es: {d[palabra_en_ingles]}")
            break
        elif opc == 2:
            palabras_en_español = d.values()
            print("****PALABRAS****")
            for i in palabras_en_español: print(i)
            palabra_en_español = input("Digita la palabra que deseas traducir a ingles\n")
            ans = list(d.keys())[list(d.values()).index(palabra_en_español)]
            print(f"La palabra ingresada fue: {palabra_en_español} y su traducción a ingles es: {ans}")
            break
        elif opc == 0: break
        
        else: 
            print("Opcion invalida")
            opc = int(input("****TRADUCTOR*****\n1. Ingles -> Español\n2. Español -> Ingles"))
    pass

main()