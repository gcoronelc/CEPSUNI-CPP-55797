#include <iostream>
#include "libreria.h"
using namespace std;



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
				cout << endl;
				cout << "NOMBRE\tPC1\tPC2\tPF" << endl;
				cout << "----------------------------------------------" << endl;
				cout << "Gustavo\t18\t20\t19" << endl;
				cout << "Karla\t15\t17\t16" << endl;
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
