#include <iostream>
using namespace std;

struct Estudiante{
	string nombre;
	int nota1;
	int nota2;
	int promedio;
};

int main(){
	
	Estudiante estudiantes[10];
	int tope = 2;
	
	for(int i=0; i<tope; i++){
		cout << "Nombre: "; cin >> estudiantes[i].nombre;
		cout << "Nota 1: "; cin >> estudiantes[i].nota1;
		cout << "Nota 2: "; cin >> estudiantes[i].nota2;
		estudiantes[i].promedio = (estudiantes[i].nota1 + estudiantes[i].nota2) / 2;
	}

	
	for(int i=0; i<tope; i++){
		cout << endl;
		cout << "Nombre: " << estudiantes[i].nombre << endl;
		cout << "Nota 1: " << estudiantes[i].nota1 << endl;
		cout << "Nota 2: " << estudiantes[i].nota2 << endl;
		cout << "Promedio: " << estudiantes[i].promedio << endl;
	}
	
	return 0;
	
}
