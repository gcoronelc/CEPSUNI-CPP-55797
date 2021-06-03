#include<iostream>
using namespace std;

void generarMatriz(int matriz[4][6]){
	for(int fila=0; fila<4; fila++){
		for(int columna=0; columna<6; columna++){
			matriz[fila][columna] = 30 + rand() % (21);
		}
	}
}

void mostrarMatriz(int matriz[4][6]){
	cout << endl;
	cout << "MATRIZ" << endl;
	for(int fila=0; fila<4; fila++){
		for(int columna=0; columna<6; columna++){
			cout << matriz[fila][columna] << "\t";
		}
		cout << endl;
	}
}

int *generarPromedios1(int matriz[4][6]){
	int *promedios, suma;
	promedios = new int[4];
	for(int fila=0; fila<4; fila++){
		suma = 0;
		for(int columna=0; columna<6; columna++){
			suma += matriz[fila][columna];
		}
		promedios[fila] = suma / 6;
	}
	return promedios;
}

void generarPromedios2(int matriz[4][6], int promedios[]){
	int suma;
	for(int fila=0; fila<4; fila++){
		suma = 0;
		for(int columna=0; columna<6; columna++){
			suma += matriz[fila][columna];
		}
		promedios[fila] = suma / 6;
	}
}


int main(){
	
	int matriz[4][6];
	int *promedios1;
	int promedios2[4];
	
	generarMatriz(matriz);
	mostrarMatriz(matriz);
	promedios1 = generarPromedios1(matriz);
	
	cout << "PROMEDIOS 1" << endl;
	for(int i=0; i<4; i++){
		cout << promedios1[i] << endl;
	}
	
	generarPromedios2(matriz, promedios2);
	
	cout << endl;
	cout << "PROMEDIOS 2" << endl;
	for(int i=0; i<4; i++){
		cout << promedios2[i] << endl;
	}
	
	system("pause");
	return 0;
	
}
