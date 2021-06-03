// Arreglo dinamico.
// El tamaño del arreglo se define en tiempo de ejecución del programa.
// Leer "N" numeros y mostrar el mayor y menor.

#include <iostream>
using namespace std;

int main(){
	
	// Configuración
	setlocale(LC_CTYPE, "Spanish");	
	
	// Variables
	int N, mayor, menor;
	int *datos;
	
	/*
	datos = NULL;
	cout << "Datos: " << datos << endl;
	*/
	
	// Lectura de N
	cout << "Ingrese el valor de N: ";
	cin  >> N;
	cout << endl;
	
	// Definir el arreglo
	datos = new int[N];
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl << endl;
	for( int i=0; i < N; i++ ){
		cout << "Elemento " << (i+1) << ": ";
		cin  >> datos[i];
	}
	cout << endl;
	
	// Proceso
	mayor = datos[0];
	menor = datos[0];
	for( int i=1; i<N; i++ ){
		if( datos[i] > mayor ){
			mayor = datos[i];
		}
		if( datos[i] < menor ){
			menor = datos[i];
		}
	}
	
	// Reporte
	cout << "REPORTE" << endl;
	cout << "============================" << endl;
	cout << "Numero mayor: " << mayor << endl;
	cout << "Numero menor: " << menor << endl;
	cout << endl;
	
	// Liberar espacio
	delete[] datos;
	datos = NULL;
	
	system("pause");
	return 0;
}	
