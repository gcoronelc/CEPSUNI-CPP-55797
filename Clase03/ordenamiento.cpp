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
	int n = 5;
	int datos[n] = {30,25,50,15,21};
	int aux;
	
	// Ordenamiento
	for(int i=1; i<n; i++ ){ // Recorridos
		for(int j=0; j<(n-1); j++){ // Comparaciones
			if(datos[j] > datos[j+1]){
				intercambio(datos[j], datos[j+1]);
			}
		}
	}
	
	// Mostrar reporte
	for(int i=0; i<n; i++ ){
		cout << datos[i] << endl;
	}
	cout << endl;
	
	system("pause");
	return 0;
}		
