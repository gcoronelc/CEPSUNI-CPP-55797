// Julio Delgado

#include<iostream>
using namespace std;
int main()
{
	int i=0,num1,num2,num3,num4,num5;
	cout<<"Ingrese los 5 valores :";
	cin>>num1>>num2>>num3>>num4>>num5;
	int mayor=num1;
	int arreglo[]={num1,num2,num3,num4,num5};
	while(i<5)
	{
		if(	arreglo[i]>mayor)
		{
			mayor=arreglo[i];
		}
		i++;
	}
	cout<<"El mayor es "<<mayor;
}

