#include <iostream>
#include <string>
#include <fstream>
#include <string.h>
#include <windows.h>
#include "libreria.h"
using namespace std;


int main(){
	
	// Configuracion
	setlocale(LC_CTYPE, "Spanish");
	SetConsoleTitle("EJERCICIO 4 CON ESTRUCTURAS");
	
	// Inicializar variables
	nombArchivo = "Estudiantes.TXT";
	contEstudiantes = 0;
	
	
	// Proceso General
	crearArchivo(); // Asegura la existencia del archivo
	leerArchivo();  // Se asugura que el archivo de texto no se ve bien.
	do{
		procMenu();
		switch(opMenu){
			case 1:
				procRegistrarEstudiante();
				break;
			case 2:
				procListado();
				break;
			case 3:
				procEstadistico();
				break;
			case 4:
				cout << "Opcion 4" << endl;
				break;											
		}
		cout << endl;
		system("pause");
	} while(opMenu != 4);
	
	system("pause");
	return 0;
}
