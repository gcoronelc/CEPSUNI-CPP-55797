#include <iostream>
#include <fstream>
using namespace std;


void crearArchivo(){
	// Variable
	ifstream archivo1;
	ofstream archivo2;
	
	// Abrir el archivo
	archivo1.open(nombArchivo,ios::in);
	if(!archivo1.fail()){
		archivo1.close();
		return;
	}
	
	// Crear el archivo
	archivo2.open(nombArchivo,ios::out);
	archivo2.close();
	
}

// Carga el archivo en el arreglo
void cargarArchivo(){
	// Variable
	ifstream archivo;
	string filaDatos;
	string registro[9];
	// Proceso
	archivo.open(nombArchivo,ios::in);
	while(!archivo.eof()){
		// Lee una fila de datos
		getline(archivo, filaDatos);
		if(filaDatos.length() == 0){
			continue;
		}
		// Desgregar la fila
		int indice = 0, posicion;
		while( filaDatos.size() > 0){
			posicion = filaDatos.find("|");
			if(posicion > 0){
				registro[indice] = filaDatos.substr(0, posicion);
				filaDatos.erase(0, posicion + 1);
			} else {
				registro[indice] = filaDatos;
				filaDatos = "";
			}
			indice++;
		}
		// Cargar registro en el arreglo global
		lista[contEstudiantes].nombre = registro[0];
		lista[contEstudiantes].practica1 = atoi(registro[1].c_str());
		lista[contEstudiantes].practica2 = atoi(registro[2].c_str());
		lista[contEstudiantes].practica3 = atoi(registro[3].c_str());
		lista[contEstudiantes].practica4 = atoi(registro[4].c_str());
		lista[contEstudiantes].promPracticas = atoi(registro[5].c_str());
		lista[contEstudiantes].examenFinal = atoi(registro[6].c_str());
		lista[contEstudiantes].promFinal = atoi(registro[7].c_str());
		lista[contEstudiantes].estado = registro[8];
		contEstudiantes++;
		
	} // Bucle del archivo
	archivo.close();
}

void actualizarArchivo(Estudiante rec){
	// Variable
	ofstream archivo;
	// Proceso
	archivo.open(nombArchivo,ios::app);
	archivo << rec.nombre << "|" << rec.practica1 << "|";
	archivo << rec.practica2 << "|" << rec.practica3 << "|";
	archivo << rec.practica4 << "|" << rec.promPracticas << "|";
	archivo << rec.examenFinal << "|" << rec.promFinal << "|";
	archivo << rec.estado << endl;
	archivo.close();
}

