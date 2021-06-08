#include <iostream>
using namespace std;

struct Estudiante{
	string nombre;
	int nota1;
	int nota2;
	int promedio;
};

int main(){
	
	Estudiante est1;
	est1.nombre = "Gustavo";
	est1.nota1 = 18;
	est1.nota2 = 20;
	est1.promedio = (est1.nota1 + est1.nota2) / 2;
	
	cout << "Nombre: " << est1.nombre << endl;
	cout << "Nota 1: " << est1.nota1 << endl;
	cout << "Nota 2: " << est1.nota2 << endl;
	cout << "Promedio: " << est1.promedio << endl;
	
	return 0;
}
