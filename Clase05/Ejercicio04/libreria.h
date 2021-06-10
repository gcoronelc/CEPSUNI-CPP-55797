#include <iostream>
using namespace std;

// Tipos
struct Estudiante{
	string nombre;
	int practica1;
	int practica2;
	int practica3;
	int practica4;
	int promPracticas;
	int examenFinal;
	int promFinal;
};

// Variables Globales
int tamanio = 100, contEstudiantes = 0, opMenu;
Estudiante lista[100];


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
	cout << "REGISTRAR ESTUDIANTE " << (contEstudiantes + 1) << endl;
	cout << "============================================" << endl;	
	// Lectura de Datos
	cout << "Estudiante: "; cin >> lista[contEstudiantes].nombre;
	cout << "Practica 1: "; cin >> lista[contEstudiantes].practica1;
	cout << "Practica 2: "; cin >> lista[contEstudiantes].practica2;
	cout << "Practica 3: "; cin >> lista[contEstudiantes].practica3;
	cout << "Practica 4: "; cin >> lista[contEstudiantes].practica4;
	cout << "Examen Final: "; cin >> lista[contEstudiantes].examenFinal;
	// Proceso
	lista[contEstudiantes].promPracticas = (lista[contEstudiantes].practica1 + 
			lista[contEstudiantes].practica2 + lista[contEstudiantes].practica3 + 
			lista[contEstudiantes].practica4)/4;
	lista[contEstudiantes].promFinal = (lista[contEstudiantes].promPracticas + 
			lista[contEstudiantes].examenFinal)/2;								
	// Reporte
	cout << endl;
	cout << "REPORTE ESTUDIANTE" << endl;
	cout << "=================================" << endl;
	cout << "Promedio de practicas: " << lista[contEstudiantes].promPracticas << endl;
	cout << "Promedio final: " << lista[contEstudiantes].promFinal << endl;
	// Incrementar el contador
	contEstudiantes++;
}


void procListado(){
	system("cls");
	cout << "LISTADO DE ESTUDIANTES" << endl;
	cout << "============================================= " << endl;
	cout << endl;
	cout << "NOMBRE\tPC1\tPC2\tPC3\tPC4\tPP\tEF\tPF" << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	for(int i=0; i<contEstudiantes; i++){
		cout << lista[i].nombre << "\t";
		cout << lista[i].practica1 << "\t";
		cout << lista[i].practica2 << "\t";
		cout << lista[i].practica3 << "\t";
		cout << lista[i].practica4 << "\t";
		cout << lista[i].promPracticas << "\t";
		cout << lista[i].examenFinal << "\t";
		cout << lista[i].promFinal << "\t";
		cout << endl;
	}
	cout << "-------------------------------------------------------------------------" << endl;
	cout << endl;
}


void procEstadistico(){
	/*
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
	*/
}

