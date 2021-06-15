#include <iostream>
#include <string>
#include <windows.h>
#include "datos.h"
#include "libreria1.h"
#include "libreria2.h"
using namespace std;


int main(){
	
	// Configuracion
	setlocale(LC_CTYPE, "Spanish");
	SetConsoleTitle("EJERCICIO 4 CON ESTRUCTURAS");
	
	// Primeros pasos
	crearArchivo();
	cargarArchivo();
	//system("pause");
	
	// Proceso General
	do{
		procMenu();
		switch(opMenu){
			case 1:
				procRegistrarEstudiante();
				// Actualizar archivo
				actualizarArchivo(lista[contEstudiantes - 1]);
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
