from calificacion import Calificacion

class Estudiante:
    
    def __init__(self, rut, nombre):
        self._rut = rut
        self._nombre = nombre
        self._notas = []
    
    @property
    def rut(self):
        return self._rut
    
    @rut.setter
    def rut(self, rut):    
        self._rut = rut

    @property
    def nombre(self):
        return self._nombre
    
    @nombre.setter
    def nombre(self, nombre):
        self._nombre = nombre
    
    def agregar_calificacion(self):
        registra_calificacion = True
        while(registra_calificacion):
            nota = int(input("Ingresa una calificaión: "))
            Cal = Calificacion(nota)
            self._notas.append(Cal.nota)
            opcion = input("¿Desea ingresar otra calificacion? (s/n)")
            if opcion == "n" or opcion == "N":
                registra_calificacion = False
        
    def borrar_calificacion(self, nota):
        cal = Calificacion.nota(nota)
        self._notas.remove(cal.nota)
    
    def obtener_promedio(self):
        return sum(self._notas) / len(self._notas)

    

