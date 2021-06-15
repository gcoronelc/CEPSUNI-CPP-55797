/*
Ejemplo para leer un archivo.
*/

#include <iostream>
#include <fstream>
#include <string.h>
#include <windows.h>
using namespace std;

int main(){

	// Variable
	ifstream archivo;
	string texto;
	
	// Abrir el archivo en modo lectura
	archivo.open("datos.txt",ios::in);

	// Validar
	if(archivo.fail()){
		cout << "No se puede abrir el archivo." << endl;
		exit(1);
	}
	
	// Reporte desde el archivo
	while(!archivo.eof()){
		getline(archivo, texto);
		cout << texto << endl;
	}
	cout << endl;
	
	// Cerrar el archivo
	archivo.close();
	
	return 0;
}
