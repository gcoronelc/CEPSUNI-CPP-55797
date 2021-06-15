/*
Ejemplo para crear un archivo.
*/

#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main(){

	// Variable
	ofstream archivo;
	
	// Apertura del archivo
	archivo.open("datos.txt",ios::out);

	// Validar
	if(archivo.fail()){
		cout << "No se puede crear el archivo." << endl;
		exit(1);
	}
	
	// Reporte en archivo
	archivo << "Este es un ejemplo de archivo." << endl;
	archivo << "Esto se pone bueno." << endl;
	archivo << "Ahora todos mis datos iran a archivos.";
	
	// Fin
	cout << "Revisa tu archivo." << endl;
	cout << endl;
	
	// Cerrar el archivo
	archivo.close();
	
	return 0;
}
