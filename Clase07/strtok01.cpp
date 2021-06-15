#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
	
	string dato = "123";
	cout << stoi(dato) << endl;
	
	// Variables
	string valores = "1234,5432,6789,1234,6523";
	char datos[1000];
	int numero;
	char *ptr;
	
	// Lectura de datos
	cout << "Datos: ";
	cin >> datos;
	
	// Proceso
	ptr = strtok(datos,",");
	while(ptr != NULL){
		numero = atoi(ptr);
		cout << numero << endl;
		ptr = strtok(NULL,",");
	}

	return 0;
}
