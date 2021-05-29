// Julio Delgado
// Modificado por Gustavo

#include<iostream>
using namespace std;
int main()
{
	// Variables
	int n = 5, arreglo[n], mayor;
	
	// Lectura
	for( int i = 0; i < n; i++ ){
		cout << "Ingreso el valor " << (i+1) << ": ";
		cin  >> arreglo[i];
	}
	
	// Proceso
	mayor = arreglo[0];
	for( int i = 1; i < n; i++ ){
		if(	arreglo[i] > mayor ){
			mayor=arreglo[i];
		}
	}
	
	// Reporte
	cout << endl;
	cout << "El mayor es: " << mayor << endl;
	
	system("pause");
	return 0;
}

