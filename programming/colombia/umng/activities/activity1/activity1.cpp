#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;



struct Fecha{
	int dia;
	int mes;
	int anio;
};



struct producto{
	
	int codigo;
	string nombre;
	struct Fecha fecha;
	double valor_compra;
	double valor_venta;
	double discount;
	
};





void mostrarDatos(struct producto);
void mostrarDatos(struct producto data){
	system("cls");

	cout << "Codigo Producto: " << data.codigo << endl;
	cout << "Nombre Producto: " << data.nombre << endl;
	cout << "Fecha Compra: " << data.fecha.dia << "/"  << data.fecha.mes << "/" << data.fecha.anio  << endl;
	cout << "Valor Compra: " << data.valor_compra << endl;
	cout << "Valor Venta: " << data.valor_venta << endl;
	cout << "Descuento: " << data.discount << endl;
	cout << "\n" << endl;

		
	
}


void buscarDatos(struct producto[]);
void buscarDatos(struct producto dataSet[]){
	system("cls");
	while(true){
		
		int codigo;
		//struct producto busqueda;
		cout << "Codigo Producto: ";
		cin >> codigo;
		
		bool flag = true;
		
		for(int i = 0; i<20;i++){
			
			if(dataSet[i].codigo == codigo && dataSet[i].codigo != 0){
				flag = false;
				cout << "Nombre Producto: " << dataSet[i].nombre << endl;	
				cout << "Fecha Compra: " << dataSet[i].fecha.dia << "/"  << dataSet[i].fecha.mes << "/" << dataSet[i].fecha.anio  << endl;
				cout << "Valor Compra: " << dataSet[i].valor_compra << endl;
				cout << "Valor Venta: " << dataSet[i].valor_venta << endl;
				cout << "Descuento: " << dataSet[i].discount << endl;
				cout << "Utilidad: " << (( (dataSet[i].valor_venta - dataSet[i].discount) - dataSet[i].valor_compra )/dataSet[i].valor_compra)*100 << "%" << endl;
				cout << "Promedio Venta: " << dataSet[i].valor_venta - dataSet[i].discount << endl;
				cout << "\n" << endl;
			}else{
				continue;
			}
		}
		
		if(flag) cout << "Codigo no encontrado" << endl;
		
		cout << "¿Deseas seguir pidiendo datos? S=Si, N=No: " << endl;
		char opt;
		cin >> opt;
		if(opt == 'S'){
			
		}else if(opt == 'N'){
			break;
		}else{
			cout << "Dato invalido, ya no se pediran datos" << endl;
			break;
		}
		
		
		
	}
	
	
	
}





bool buscarFechasIguales(struct producto, struct producto[],int);
bool buscarFechasIguales(struct producto data, struct producto dataSet[], int code_evit){
	
	
	for(int i = 0; i < 20; i++){
		
		if(data.codigo == dataSet[i].codigo && dataSet[i].codigo != 0 && i != code_evit){

			if( (data.fecha.dia == dataSet[i].fecha.dia) &&  (data.fecha.mes == dataSet[i].fecha.mes) && (data.fecha.anio == dataSet[i].fecha.anio) ) return true;
			else continue;
			
		}
	}
	
	return false;
	
}




int main(){
	
	
	
	struct producto *Productos;
	Productos = new struct producto[20];
	
	
	cout << "Taller UMNG\n" << endl;
	
	cout << "Ingresa los datos de la siguiente forma (MAXIMO 20 REGISTROS)" << endl;
	
	int cnt = 0;
	
	while(cnt < 20){
		
		int codigo;
		string nombre;
		
		struct Fecha fecha;
		int dia;
		int mes;
		int anio;
	
		double valor_compra;
		double valor_venta;
		double discount;
		
		cout << "Codigo (Diferente de 0): ";
		cin >> codigo;
		while(true){
			if(codigo == 0){
				cout << "Ingrese un valor valido para el código: ";
				cin >> codigo;
				continue;
			}
			break;
		}
		
		
		
		cin.clear();
		
		cout << "Nombre: ";
		cin >> nombre;
		
		cin.clear();
		
		cout << "Dia: ";
		cin >> dia;
		while(true){
			if(dia < 1 || dia > 30){
				cout << "Ingrese un valor valido para el dia: ";
				cin >> dia;
				continue;
			}
			break;
		}
		
		
		cin.clear();
		
		cout << "Mes: ";
		cin >> mes;
		while(true){
			if(mes < 1 || mes > 12){
				cout << "Ingrese un valor valido para el mes: ";
				cin >> mes;
				continue;
			}
			break;
		}
		
		cin.clear();
		
		cout << "Anio: ";
		cin >> anio;
		while(true){
			if(anio < 1900 || anio > 2021){
				cout << "Ingrese un valor valido para el anio: ";
				cin >> anio;
				continue;
			}
			break;
		}
		
		cin.clear();
		
		fecha = {dia, mes, anio};
		
		cout << "Valor Compra: ";
		cin >> valor_compra;
		while(true){
			if(valor_compra < 0){
				cout << "Ingrese un valor valido para el valor de compra: ";
				cin >> valor_compra;
				continue;
			}
			break;
		}
		
		cin.clear();
		
		cout << "Valor Venta: ";
		cin >> valor_venta;
		while(true){
			if(valor_venta < 0){
				cout << "Ingrese un valor valido para el valor de venta: ";
				cin >> valor_venta;
				continue;
			}
			break;
		}
		
		cin.clear();
		
		cout << "Descuento: ";
		cin >> discount;
		while(true){
			if(discount < 0 || discount > valor_compra){
				cout << "Ingrese un valor valido para el descuento: ";
				cin >> discount;
				continue;
			}
			break;
		}
		
		cin.clear();
		
		struct producto Prod = {codigo, nombre, fecha, valor_compra, valor_venta, discount};
	
		
		Productos[cnt] = Prod;
		
		
		
		if(buscarFechasIguales(Prod,Productos, cnt)){
			
			cout << "Producto con mismo codigo tienen misma fecha, no valido" << endl;
			
			continue;
			
		}	
		
		
		mostrarDatos(Prod);
		
	
		
		system("cls");
		cout << "¿Deseas seguir ingresando datos? S=Si, N=No: " << endl;
		char opt;
		cin >> opt;
		if(opt == 'S'){
			
		}else if(opt == 'N'){
			break;
		}else{
			cout << "Dato invalido, se finalizarán datos" << endl;
			break;
		}
		
		system("cls");
		cnt++;
	}
	
	
	
	buscarDatos(Productos);
	
	
	
	
	return 0;
}
