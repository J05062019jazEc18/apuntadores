#include<iostream>
#include<conio.h>

using namespace std;

int main(int argc, char** argv)
{

	int arreglo1[10],*puntero;
	puntero=&arreglo1[0];
	int mayor;
	
	for(int i=0; i<=9; i++){
	cout<<"Ingres el numero "<<i+1<<endl;
	cin>>arreglo1[i];
	
}

	for(int *puntero=&arreglo1[0]; puntero<=&arreglo1[9]; puntero++){
		if (*puntero>mayor) mayor=*puntero;

	}
	
	cout<<"El numero mayor es: "<<mayor<<endl;
	return 0;
}	
