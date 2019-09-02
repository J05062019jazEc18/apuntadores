#include<iostream>
#include<conio.h>
using namespace std;

struct Clase{
	char tipo[20];
	int peso;
};
struct Animales{ 
	char nombre[20];
	int edad;
	char color[20];
	struct Clase clas;
};
int main (int argc,char** argv){
	struct Animales A1[5];
	struct Animales *apuntador;
	apuntador=A1;
	
	for(int i=0; i<1;i++){
		
		cout<<"Nombre:";
		cin.getline(A1[i].nombre,20,'\n');	
		cout<<"Edad:";
		cin>>A1[i].edad;
		cout<<"Color: ";
		cin>>A1[i].color;
		cout<<"Tipo:";
		fflush(stdin);
		cin.getline(A1[i].clas.tipo,20,'\n');                
	}
		cout<<endl<<"Nombre guardado: "<<apuntador->nombre;
		cout<<endl<<"Edad guardada: "<<apuntador->edad;
		cout<<endl<<"Color guardado: "<<apuntador->color;
		cout<<endl<<"Clase guardada: "<<apuntador->clas.tipo;
                                                                                                                                                                                                                                         
                                                                                                                                                                                          

	getch();
	return 0;
}        
