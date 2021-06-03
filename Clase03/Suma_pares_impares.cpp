//Julio Delgado
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

// Variable Global
int arreglo[10];

int miRand(int i){
	int num, cont = 0;
	do{
		num = 30 + rand() % (21);
		cont = 0;
		for(int j=0; j<i; j++){
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
	
	//int arreglo[10], suma_pares, suma_impares;
	int suma_pares, suma_impares;
	
	for( int i = 0; i < 10; i++ ){
		arreglo[i] = miRand(i);
		cout << "Arreglo [ " << (i+1) << " ]: " << arreglo[i] << endl;
	}
	
	
	suma_pares=0;
	suma_impares=0;
	for( int i = 0; i < 10; i++){
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
