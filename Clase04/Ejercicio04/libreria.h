#include <iostream>
using namespace std;

// Variables Globales
int tamanio = 100, contEstudiantes = 0, opMenu;
string estudiantes[100];
int notas[100][7];

// Menu de opciones
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

// Proceso registrar estudiante
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


void procListado(){
	system("cls");
	cout << "LISTADO DE ESTUDIANTES" << endl;
	cout << "============================================= " << endl;
	cout << endl;
	cout << "NOMBRE\tPC1\tPC2\tPC3\tPC4\tPP\tEF\tPF" << endl;
	cout << "----------------------------------------------" << endl;
	for(int i=0; i<contEstudiantes; i++){
		cout << estudiantes[i];
		for(int j=0; j<=6; j++){
			cout << "\t" << notas[i][j];
		}
		cout << endl;
	}
	cout << "----------------------------------------------" << endl;
	cout << endl;
}


void procEstadistico(){
	// Variables
	int contAprobados=0;
	double porcAprobados, porcDesaprobados, sumaPromedio=0.0;
	double mediaPromedio, medianaPromedio, dsPromedio;
	// Proceso
	for(int i=0; i<contEstudiantes; i++){
		contAprobados += (notas[i][6]>=14?1:0);
		sumaPromedio += notas[i][6];
	}
	porcAprobados = contAprobados * 100.0 / contEstudiantes;
	porcDesaprobados = 100 - porcAprobados;
	mediaPromedio = sumaPromedio / contEstudiantes;
	// Reporte
	system("cls");
	cout << "REPORTE ESTADISTICO" << endl;
	cout << "==================================" << endl;
	cout << "Porcentaje de aprobados: " << porcAprobados << "%" << endl;
	cout << "Porcentaje de desaprobados: " << porcDesaprobados << "%" << endl;
	cout << "La media es: " << mediaPromedio << endl;
	cout << endl;
	
}

