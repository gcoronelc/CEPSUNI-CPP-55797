#include <iostream>
#include <string>
#include <windows.h>
 
using namespace std;
 
int main(){
	
	// Configuracion
	setlocale(LC_CTYPE, "Spanish");
	SetConsoleTitle("LECTURA DE CADENAS");
	
	int num1, num2;
	string cadena;
 
 	cout << "N�mero 1: ";
 	cin  >> num1;  cin.ignore();
  cout << "Cadena: ";
  getline(cin, cadena);
 	cout << "N�mero 2: ";
 	cin  >> num2;  
  
 
	cout << endl << endl;
	cout << "N�mero 1: " << num1 << endl;
	cout << "N�mero 2: " << num2 << endl;
	cout << "Cadena: " << cadena << endl;
	cout << endl;
 
    return 0;
}
