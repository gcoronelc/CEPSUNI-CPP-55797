//Julio Delgado
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int miRand(int arreglo[], int indice){
	int num, cont = 0;
	do{
		num = 30 + rand() % (21);
		cont = 0;
		for(int j=0; j<indice; j++){
			if( arreglo[j] == num){
				cont++;
			}
		}
	} while(cont>0);
	return num;
}

int main(){
	
	// Inicializar la semilla
	srand(time(NULL));
	
	// Variables
	int n = 6;
	int arreglo[n], suma_pares, suma_impares;
	
	// Genera los números
	for( int i = 0; i < n; i++ ){
		arreglo[i] = miRand(arreglo,i);
	}
	
	// mostrar el arreglo
	for( int i = 0; i < n; i++ ){
		cout << "Arreglo [ " << (i+1) << " ]: " << arreglo[i] << endl;
	}
	
	
	suma_pares=0;
	suma_impares=0;
	for( int i = 0; i < n; i++){
		if( arreglo[i] % 2 == 0){
			suma_pares += arreglo[i];
		}
		else{
			suma_impares += arreglo[i];
		}
	}
	
	cout << "\nREPORTE" << endl;
	cout << "==========================" << endl;
	cout << "La suma de pares es: " << suma_pares << endl;
	cout << "La suma de impares es: " << suma_impares << endl;
	return 0;
}
