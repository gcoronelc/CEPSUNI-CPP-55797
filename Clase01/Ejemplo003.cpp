#include <iostream>
using namespace std;

int main(){
	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int nota[] = {17, 14, 8, 12, 18};
	int suma, promedio;
	// Proceso
	suma = 0;
	for( int i = 0; i < 5; i++ ){
		suma += nota[i];
	}
	promedio = suma / 5;
	// Reporte
	cout << "Suma: " << suma << endl;
	cout << "Promedio: " << promedio << endl;
	

	system("pause");
	return 0;
	
}	
