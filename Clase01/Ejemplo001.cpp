#include <iostream>
using namespace std;

int main(){
	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	int nota[5];
	
	nota[0] = 18;
	nota[1] = 20;
	nota[2] = 17;
	nota[3] = 8;
	nota[4] = 14;
	
	cout << "Nota 0: " << nota[0] << endl;
	cout << "Nota 4: " << nota[4] << endl;
	

	system("pause");
	return 0;
	
}	
