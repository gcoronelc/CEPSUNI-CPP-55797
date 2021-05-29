//Jose Enrique Barrena Mosilot
#include<iostream>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	int n =5;
	int nota[n], i, menor,suma;
	int promedio;
	
	cout<<"\nIngrese  5 notas: \n";
	
	for( i=0; i<5;i++){
		cout<<"\nNota["<<i+1<<"]: ";cin>>nota[i];
		
	}
	
	suma =0;
	menor = nota[0];
	for( i=0; i<5;i++){
		suma += nota[i];
		if(nota[i]<menor){
				menor=nota[i];
		}	
	}
	
	promedio = (suma-menor)/(n-1);
	//cout<<"\nLa nota menor es: "<<menor;
	cout<<"\nEl promedio es: "<<promedio;
	
	return 0;
	
}
