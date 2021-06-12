#include <iostream>
#include <sstream>
#include <fstream>
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
	string estado;
};

// Variables Globales
int tamanio = 100, contEstudiantes = 0, opMenu;
Estudiante lista[100], regActual;
string nombArchivo;

/* Proceso que crea el archivo. */
/* El objetivo es asegurar que el archivo exista. */
void crearArchivo(){
	// Abrir archivo
	ifstream archivo1;
	archivo1.open(nombArchivo,ios::in);
	// Validar
	if(archivo1.fail()){
		// Crear el archivo
		ofstream archivo2;
		archivo2.open(nombArchivo,ios::out);
		archivo2.close();
	} else {
		archivo1.close();
	}

}

// Proceso se encarga de leer el archivo y cargarloa al arreglo
void leerArchivo(){

	ofstream archivo;
	
	// Grabar en archivo
	archivo.open("datos.txt",ios::app);
} 

// Proceso agregar registro actual al archivo
void grabarRegistro(){
	// Crear la cadena
	stringstream datos;
	datos << regActual.nombre << "|" << regActual.practica1 << "|" << regActual.practica2;
	datos << regActual.practica3 << "|" << regActual.practica4 << "|" << regActual.promPracticas;
	datos << regActual.examenFinal << "|" << regActual.promFinal << "|" << regActual.estado;
	// Agregar linea al archivo
	ofstream archivo;
	archivo.open(nombArchivo,ios::app);
	archivo << datos.str() << endl;
	archivo.close();
}

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
	cout << "Estudiante: "; cin >> regActual.nombre;
	cout << "Practica 1: "; cin >> regActual.practica1;
	cout << "Practica 2: "; cin >> regActual.practica2;
	cout << "Practica 3: "; cin >> regActual.practica3;
	cout << "Practica 4: "; cin >> regActual.practica4;
	cout << "Examen Final: "; cin >> regActual.examenFinal;
	// Proceso
	regActual.promPracticas = (regActual.practica1 + regActual.practica2 
			+ regActual.practica3 + regActual.practica4)/4;
	regActual.promFinal = (regActual.promPracticas + regActual.examenFinal)/2;	
	regActual.estado = (regActual.promFinal>=12)?"Aprobado":"Desaprobado";
	lista[contEstudiantes] = regActual;
	// Reporte
	cout << endl;
	cout << "REPORTE ESTUDIANTE" << endl;
	cout << "=================================" << endl;
	cout << "Promedio de practicas: " << regActual.promPracticas << endl;
	cout << "Promedio final: " << regActual.promFinal << endl;
	cout << "Estado: " << regActual.estado << endl;
	// Incrementar el contador
	contEstudiantes++;
	// Grabar el registro
	grabarRegistro();
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
	// Variables
	int contAprobados=0;
	double porcAprobados, porcDesaprobados, sumaPromedio=0.0;
	double mediaPromedio, medianaPromedio, dsPromedio;
	// Proceso
	for(int i=0; i<contEstudiantes; i++){
		contAprobados += (lista[i].promFinal>=14?1:0);
		sumaPromedio += lista[i].promFinal;
	}
	porcAprobados = contAprobados * 100.0 / contEstudiantes;
	porcDesaprobados = 100 - porcAprobados;
	mediaPromedio = sumaPromedio / contEstudiantes;
	// Ordenamiento
	for( int i = 1; i < contEstudiantes; i++ ){
		for( int j = 0; j < ( contEstudiantes - 1 ); j++){
			if( lista[j].promFinal > lista[j+1].promFinal ){
				Estudiante aux;
				aux = lista[j];
				lista[j] = lista[j+1];
				lista[j+1] = aux;
			}
		}
	}
	// Proceso Mediana
	if( contEstudiantes % 2 != 0 ){ // N es impar
		medianaPromedio = lista[contEstudiantes/2].promFinal;
	}
	else{
		medianaPromedio = (lista[contEstudiantes/2].promFinal + lista[contEstudiantes/2 - 1].promFinal)/2;
	}
	// Reporte
	system("cls");
	cout << "REPORTE ESTADISTICO" << endl;
	cout << "==================================" << endl;
	cout << "Porcentaje de aprobados: " << porcAprobados << "%" << endl;
	cout << "Porcentaje de desaprobados: " << porcDesaprobados << "%" << endl;
	cout << "La media es: " << mediaPromedio << endl;
	cout << "La mediana es: " << medianaPromedio << endl;
	cout << endl;
}

