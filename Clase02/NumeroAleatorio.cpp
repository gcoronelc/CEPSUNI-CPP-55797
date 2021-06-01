// N�meros aleatorios
/*

		Libreria: #include<stdlib.h>
		Funci�n:  rand()

*/

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	
	// Inicializar la semilla
	srand(time(NULL));
	
	// Configuracion
	setlocale(LC_CTYPE, "Spanish");
	
	cout << "N�meros Generales" << endl;
	for( int i=1; i<=10; i++){
		cout << rand() << endl;
	}
	cout << endl;
	
	cout << "N�meros aleatorios entre 0 y 50" << endl;
	for( int i=1; i<=10; i++){
		cout << rand()%51 << endl;
	}
	cout << endl;
	
	cout << "N�meros aleatorios entre 1 y 5" << endl;
	for( int i=1; i<=10; i++){
		cout << rand()%5 + 1 << endl;
	}
	cout << endl;
	
	// limite_inferior + rand() % (limite_superior + 1 - limite_inferior)
	cout << "N�meros aleatorios entre 10 y 15" << endl;
	for( int i=1; i<=10; i++){
		cout << 10 + rand() % 6 << endl;
	}
	cout << endl;
	

	system("pause");
	return 0;
}		
