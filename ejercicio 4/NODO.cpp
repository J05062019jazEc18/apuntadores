#include <iostream>
#include<conio.h>

using namespace std;

struct Nodo{
	int valor;
	struct Nodo*puntero;
};

int main (){
	struct Nodo dato1,dato2,dato3,dato4,dato5;
	dato1.valor=3;
	dato1.puntero=NULL;
	dato2.valor=7;
	dato2.puntero=NULL;
	dato3.valor=9;
	dato3.puntero=NULL;
	dato4.valor=10;
	dato4.puntero=NULL;
	dato5.valor=2;
	dato5.puntero=NULL;
	
//	for (int i=0; i<=4; i++){
		dato1.puntero=&dato2;
		cout<<dato1.puntero->valor<<endl;
		dato2.puntero=&dato3;
		cout<<dato2.puntero->valor<<endl;
		dato3.puntero=&dato4;
		cout<<dato3.puntero->valor<<endl;
		dato4.puntero=&dato5;
		cout<<dato4.puntero->valor;
//		dato5.puntero=puntero;
		cout<<dato5.puntero->puntero;
		
		
		
//}
}
