from calificacion import Calificacion
from estudiante import Estudiante

run_menu = True # Booleano encargado de re ejecutar el menú principal
main_menu = ["Listado de Estudiantes", "Añadir Estudiante", "Registrar Calificación", "Obtener Promedio", "Salir"] # Generador de Menu
students = [] # Use esta lista para almacenar los estudiantes creados


def student_list(): # Función que se ejecuta al seleccionar la opción de listado de estudiantes
    if len(students) !=0:
        print("**LISTADO DE ESTUDIANTES**")
        for estudiante in students:
            print(f"{estudiante._rut}\t\t{estudiante._nombre}")
        pass
    else:
        print("No tiene estudiantes registrados")

def add_student(): # Función que se ejecuta al ingresar un nuevo estudiante
    añadir_estudiante = True
    while(añadir_estudiante):
        rut = input("Ingrese el rut: ")
        nombre = input("Ingrese el nombre: ")
        e = Estudiante(rut, nombre)
        students.append(e)
        opcion = input("¿Desea añadir otro estudiante? s/n ")
        if opcion == 'N' or opcion == 'n':
            añadir_estudiante = False

def record_score(): # Función que se ejecuta al ingresar una calificación a un estudiante determinado
    #print("AQUÍ VA LÓGICA DE AÑADIR CALIFICACIÓN A ESTUDIANTE[BORRAR]")
    id = input("Ingresa el rut del estudiante al cual deseas agreagar sus calificaciones: ")

    for i in range(len(students)):
        if students[i]._rut == id: 
            students[i].agregar_calificacion()
        else:
            print(f"El estudiante cuyo rut es {id}, no se encuentra registrado")
    

def find_average(): # Función que se ejecuta al solicitar el promedio de un estudiante determinado
    #print("AQUÍ VA LÓGICA DE AÑADIR CALIFICACIÓN A ESTUDIANTE[BORRAR]")
    id = input("Ingresa el rut del estudiante al cual deseas agreagar sus calificaciones: ")
    
    for i in range(len(students)):
        if students[i]._rut == id: 
            print(f"El estudiante cuyo rut es {id}, tiene un promedio de: {students[i].obtener_promedio()}")
        else:
            print(f"El estudiante cuyo rut es {id}, no se encuentra registrado")

while run_menu: # Menú listo para recibir opciones, solo deben ser programadas las funciones correspondientes. Cambie el código bajo su responsabilidad.
    opcion = 0
    print("Instituto profesional AIP") # Este nombre puede ser cambiado como gustes
    print("========================")
    for i, item in enumerate(main_menu):
        print(f"{i+1}.-{item}")

    option = input("Ingrese Opción:")

    if option == "1":
        student_list()
    elif option == "2":
        add_student()
    elif option == "3":
        record_score()
    elif option == "4":
        find_average()
    elif option == "5":
        run_menu = False
    else:
        print("Opción no Válida...")
