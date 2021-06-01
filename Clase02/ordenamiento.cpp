// Ordenamiento
#include<iostream>
using namespace std;

void intercambio(int &num1, int &num2){
	int aux;
	aux = num1;
	num1 = num2;
	num2 = aux;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE, "Spanish");
	
	// Datos
	int datos[] = {43,56,26,10,65,23,90,45};
	int aux;
	
	// Ordenamiento
	for(int i=0; i<=6; i++ ){
		for(int j=0; j<=6; j++){
			if(datos[j] < datos[j+1]){
				intercambio(datos[j], datos[j+1]);
			}
		}
	}
	
	// Mostrar reporte
	for(int i=0; i<=7; i++ ){
		cout << datos[i] << endl;
	}
	cout << endl;
	
	system("pause");
	return 0;
}		
