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
	string estado;
};

// Variables Globales
int tamanio = 1000, contEstudiantes = 0, opMenu;
Estudiante lista[1000];
string nombArchivo="Datos.TXT";


