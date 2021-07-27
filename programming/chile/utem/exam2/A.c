
typedef char cadena[15];
typedef struct {
    cadena color;
    int cosecha;
    int grados;
    int precio;
}producto;
    
int n = 100;
typedef producto bodega[n];


void descuento(bodega b){  
    for (int i = 0; i < n; i++){
        if (b[i].grados < 12) b[i].precio -= b[i].precio * 0.1;
    }
}
