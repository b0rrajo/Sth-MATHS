//librerias
#include<iostream>
using namespace std;

//variables
int n1, n2, n3;


//programa
int main(){
	cout<<"SoMATH 1.5 - Especcial Navidad 1.0 (2023)"<<endl;
	cout<<endl;
	cout<<"Es nochebuena y Papá Noel va a entregar los regalos, pero hay un pequeño detalle,";
	cout<<"Papá Noel solo entrega regalos debajo de los arboles y tú no tienen ninguno"<<endl;
	cout<<endl,
	cout<<"Te dispones a ir a la tienta a por uno y solo quedan 5 en una tienda, cual eliges"<<endl;
	
	//lista
	cout<<"1 - el de 09 asteriscos"<<endl;
	cout<<"2 - el de 19 asteriscos"<<endl;
	cout<<"3 - el de 29 asteriscos"<<endl;
	cout<<"4 - el de 39 asteriscos"<<endl;
	cout<<"5 - el de 49 asteriscos"<<endl;
	cout<<"6 - el de 59 asteriscos"<<endl;
	
	cout<<"elige un tipo";
	cin>>n1;
	
	switch(n1){
		case(1): n1=9;
				cout<<"Has pagado por el de 10 asteriscos"<<endl;
				cout<<"tu arbos es el siguiente"<<endl;
				for(int a=0; a<9; a++){
					cout<<"*";
				}
				cout<<endl;
		break;
		case(2): n1=19;
				cout<<"Has pagado por el de 20 asteriscos"<<endl;
				cout<<"tu arbos es el siguiente"<<endl;
				for(int a=0; a<19; a++){
					cout<<"*";
				}
				cout<<endl;
		break;
		case(3): n1=29;
				cout<<"Has pagado por el de 30 asteriscos"<<endl;
				cout<<"tu arbos es el siguiente"<<endl;
				for(int a=0; a<29; a++){
					cout<<"*";
				}
				cout<<endl;
		break;
		case(4): n1=39;
				cout<<"Has pagado por el de 40 asteriscos"<<endl;
				cout<<"tu arbos es el siguiente"<<endl;
				for(int a=0; a<39; a++){
					cout<<"*";
				}
				cout<<endl;
		break;
		case(5): n1=49;
				cout<<"Has pagado por el de 50 asteriscos"<<endl;
				cout<<"tu arbos es el siguiente"<<endl;
				for(int a=0; a<49; a++){
					cout<<"*";
				}
				cout<<endl;
		break;
		case(6): n1=59;
				cout<<"Has pagado por el de 60 asteriscos"<<endl;
				cout<<"tu arbos es el siguiente"<<endl;
				for(int a=0; a<59; a++){
					cout<<"*";
				}
				cout<<endl;
		break;
		}
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Papá noel vio tu arbol y dejó los regalos."<<endl;
	cout<<endl;
	cout<<"Feliz Navidad y Prospero Año Nuevo"<<endl;
	cout<<endl;
	cout<<"Programa propiedad de SoMATH."<<endl;
	return 0;
}
