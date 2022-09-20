class Calificacion:
    def __init__(self, nota):
        if 1 <= nota and nota <= 7:
            self._nota = nota
        else:
            self._nota = 0
    
    @property
    def nota(self):
        return self._nota
    
    @nota.setter
    def nota(self, nota):
        self._nota = nota
    
    def validar_nota(self, nota):
        if 1 <= nota and nota <= 7:
            self._nota = nota
        else:
            self._nota = 0

    def obtener_estado(self) -> str:
        if 4 <= self._nota:
            return "Azul"
        else:
            return "Rojo"

 
     
    

