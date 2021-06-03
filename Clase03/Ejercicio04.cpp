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

void procRegistrarEstudiante(){
	system("cls");
	cout << "REGISTRAR ESTUDIANTE" << endl;
	cout << "============================================" << endl;	
	// Lectura de Datos
	cout << "Estudiante: "; cin >> estudiantes[contEstudiantes];
	cout << "Practica 1: "; cin >> notas[contEstudiantes][0];
	cout << "Practica 2: "; cin >> notas[contEstudiantes][1];
	cout << "Practica 3: "; cin >> notas[contEstudiantes][2];
	cout << "Practica 4: "; cin >> notas[contEstudiantes][3];
	cout << "Examen Final: "; cin >> notas[contEstudiantes][5];
	// Proceso
	notas[contEstudiantes][4] = (notas[contEstudiantes][0] + notas[contEstudiantes][1] + 
																notas[contEstudiantes][2] + notas[contEstudiantes][3])/4;
	notas[contEstudiantes][6] = (notas[contEstudiantes][4] + notas[contEstudiantes][5])/2;								
	// Reporte
	cout << endl;
	cout << "REPORTE ESTUDIANTE" << endl;
	cout << "=================================" << endl;
	cout << "Promedio de practicas: " << notas[contEstudiantes][4] << endl;
	cout << "Promedio final: " << notas[contEstudiantes][6] << endl;
	// Incrementar el contador
	contEstudiantes++;
}
int main(){
	
	// Configuracion
	setlocale(LC_CTYPE, "Spanish");
	
	// Proceso General
	do{
		procMenu();
		switch(opMenu){
			case 1:
				procRegistrarEstudiante();
				break;
			case 2:
				cout << "Opcion 2" << endl;
				break;
			case 3:
				cout << "Opcion 3" << endl;
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
