#include<iostream>
using namespace std;

// Variables Globales
int tamanio = 100, contEstudiantes = 0, opMenu;
string estudiantes[100];
int notas[100][7];

void procMenuV1(){
	system("cls");
	cout << "SISTEMA ACADEMICO" << endl;
	cout << "============================================" << endl;
	cout << "1.- Registro de estudiante y notas" << endl;
	cout << "2.- Listado de estudiantes" << endl;
	cout << "3.- Reporte estadistico" << endl;
	cout << "4.- Salir" << endl;
	do{
		cout << endl;
		cout << "Opción: "; cin >> opMenu;
		if(opMenu < 1 || opMenu > 4){
			cout << endl;
			cout << "Opción incorrecta." << endl;
		}
	} while(opMenu < 1 || opMenu > 4);
}

void procMenu(){
	do{
		system("cls");
		cout << "SISTEMA ACADEMICO" << endl;
		cout << "============================================" << endl;
		cout << "1.- Registro de estudiante y notas" << endl;
		cout << "2.- Listado de estudiantes" << endl;
		cout << "3.- Reporte estadistico" << endl;
		cout << "4.- Salir" << endl;
		cout << endl;
		cout << "Opción: "; cin >> opMenu;
	} while(opMenu < 1 || opMenu > 4);
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE, "Spanish");
	
	// Proceso General
	do{
		procMenu();
		
	} while(opMenu != 4);
	
	system("pause");
	return 0;
}
