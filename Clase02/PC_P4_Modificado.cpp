//Jose Enrique Barrena Mosilot
// Modificado por Gustavo

#include<iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE, "Spanish");
	
	// Variables
	int n =5;
	int nota[n], i, menor,suma;
	int promedio;
	
	// Lectura
	cout<<"\nIngrese  5 notas: \n";
	for( i=0; i<5; i++ ){
		cout << "\nNota[" << i+1 << "]: "; cin >> nota[i];
	}
	
	// Proceso
	suma =0;
	menor = nota[0];
	for( i=0; i<n;i++){
		suma += nota[i];
		if(nota[i]<menor){
				menor=nota[i];
		}	
	}
	promedio = (suma-menor)/(n-1);
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "------------------------------" << endl;
	cout << "La nota menor es: " << menor << endl;
	cout << "El promedio es: " << promedio << endl;
	cout << endl;
	return 0;
	
}
