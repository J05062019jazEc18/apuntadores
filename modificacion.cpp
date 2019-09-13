#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
struct personas  { 
	char nombre[20];
	int tiempo;
	char revista[20];
};

int main (){
	struct personas P1[10];
	struct personas *apuntador;
	apuntador=P1;
	int num,a;
	char eliminar[20];
	
	do{
		for(int i=0;i<10;i++){
			P1[i].nombre[0]='n';
			cout<<"Elige una opcion del menu siguiente \n";
			cout <<"1.- Hacer registro \n";
			cout<<"2.- Eliminar un registro \n";
			cout<<"3.- Mostrar Registro \n";
			cout<<"4.- Salir \n";
			cout<<endl;
			cin>>num;
			switch (num){
				case 1:
					for(int i=0;i<10; i++){
						if(P1[i].nombre [0]=='n'){	
							cout<<"Nombre del usuario:";fflush(stdin);
							cin.getline(P1[i].nombre,20,'\n');
							cout<<"Tiempo:";
							cin>>P1[i].tiempo;
							cout<<"Nombre de la Revista: ";
							cin>>P1[i].revista;
//							cin.getline(P1[i].revista,20,'\n'); 
							cout<<endl;							
							break;

						} else 
						cout<< "El espacio" <<i+1<<" esta ocupado"<<endl;
						cout<<endl;
		   		}break;
				   		   		
        case 2:
        	cout<<endl;
            cout<<"Nombre del usuario que desea dar de baja: ";fflush(stdin);cin.getline(eliminar,20,'\n');
            for(int i=0; i<10; i++){
                a=strcmp(apuntador->nombre,eliminar);
                if (a!=0)
                    apuntador++;
                else{
                    P1[i].nombre[0]=='n';
                    cout<<"Usuario eliminado";
                    cout<<endl;
                    break;
                }
            }
            break;	 
		case 3:
			cout<<endl;
			for(int i=0; i<1; i++){
			cout<<"..::DATOS GUARDADOS::.. \n"<<endl;
	        cout<<"Nombre: "<<apuntador->nombre<<endl;
	        cout<<"Tiempo: "<<apuntador->tiempo<<endl;
	        cout<<"Nombre de la Revista:"<<apuntador->revista<<endl;
	        cout<<endl;
	    }
        	break;
        case 4:
        	cout<<endl;
            cout<<"Salir"<<endl;
            break;			  			
	}
		}
	}while (num!=4);

//	getch();
	return 0;
}        
