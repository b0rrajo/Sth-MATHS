//librerias
#include<iostream>
#include<windows.h>
using namespace std;

//variables
int asterisco, filas;
int n1, n;

//programa
int main(){
	
	// Obtener el manejador de la consola
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	cout<<"SoMATH 1.5 - Especial Navidad 1.0 (2023)"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Es nochebuena y Papá Noel va a entregar los regalos, pero hay un pequeño detalle, ";
	cout<<"Papá Noel solo entrega regalos debajo de los arboles y tú no tienen ninguno"<<endl;
	cout<<endl;
	system("pause");
	cout<<endl;
	cout<<"Te dispones a ir a la tienta a por uno y solo quedan 5 en una tienda, cual eliges"<<endl;
	
	//lista de casos
	cout<<"1 - el de 09 asteriscos"<<endl;
	cout<<"2 - el de 19 asteriscos"<<endl;
	cout<<"3 - el de 29 asteriscos"<<endl;
	cout<<"4 - el de 39 asteriscos"<<endl;
	cout<<"5 - el de 49 asteriscos"<<endl;
	cout<<"6 - el de 59 asteriscos"<<endl;
	
	cout<<"elige un tipo: ";
	cin>>n1;
	while(n1<1 || n1>6){
		cout<<"Ha habido un error critico y el programa no puede continuar"<<endl;
		cout<<"Por favor, cierre el programa e intentelo de nuevo"<<endl;
		cout<<endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	cout<< "ERROR: CHARACTER NOT DECLARED ON THIS SCOPE";
	SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	return 1;
	}
	switch(n1){
		case(1): filas=10;
				cout<<"Has pagado por el de 10 asteriscos"<<endl;
				cout<<"tu arbos es el siguiente:"<<endl;
				cout<<endl;
				cout<<endl;
				asterisco=1;
				for(n=1;n<=filas;n++){
					for(int hueco=0;hueco<=(filas-n);hueco++) cout<<" ";
					for(int rep=1;rep<=asterisco;rep++) cout<<"*";
					for(int hueco=0;hueco<=(filas-n);hueco++) cout<<" ";
				asterisco+=2;
				cout<<endl;
				}
				
		break;
		case(2): filas=20;
				cout<<"Has pagado por el de 20 asteriscos"<<endl;
				cout<<"tu arbos es el siguiente"<<endl;
				cout<<endl;
				cout<<endl;
				asterisco=1;
				for(n=1;n<=filas;n++){
					for(int hueco=0;hueco<=(filas-n);hueco++) cout<<" ";
					for(int rep=1;rep<=asterisco;rep++) cout<<"*";
					for(int hueco=0;hueco<=(filas-n);hueco++) cout<<" ";
				asterisco+=2;
				cout<<endl;
				}
		break;
		case(3): filas=30;
				cout<<"Has pagado por el de 30 asteriscos"<<endl;
				cout<<"tu arbos es el siguiente"<<endl;
				cout<<endl;
				cout<<endl;
				asterisco=1;
				for(n=1;n<=filas;n++){
					for(int hueco=0;hueco<=(filas-n);hueco++) cout<<" ";
					for(int rep=1;rep<=asterisco;rep++) cout<<"*";
					for(int hueco=0;hueco<=(filas-n);hueco++) cout<<" ";
				asterisco+=2;
				cout<<endl;
				}
		break;
		case(4): filas=40;
				cout<<"Has pagado por el de 40 asteriscos"<<endl;
				cout<<"tu arbos es el siguiente"<<endl;
				cout<<endl;
				cout<<endl;
				asterisco=1;
				for(n=1;n<=filas;n++){
					for(int hueco=0;hueco<=(filas-n);hueco++) cout<<" ";
					for(int rep=1;rep<=asterisco;rep++) cout<<"*";
					for(int hueco=0;hueco<=(filas-n);hueco++) cout<<" ";
				asterisco+=2;
				cout<<endl;
				}
		break;
		case(5): filas=50;
				cout<<"Has pagado por el de 50 asteriscos"<<endl;
				cout<<"tu arbos es el siguiente"<<endl;
				cout<<endl;
				cout<<endl;
				asterisco=1;
				for(n=1;n<=filas;n++){
					for(int hueco=0;hueco<=(filas-n);hueco++) cout<<" ";
					for(int rep=1;rep<=asterisco;rep++) cout<<"*";
					for(int hueco=0;hueco<=(filas-n);hueco++) cout<<" ";
				asterisco+=2;
				cout<<endl;
				}
		break;
		case(6): filas=60;
				cout<<"Has pagado por el de 60 asteriscos"<<endl;
				cout<<"tu arbos es el siguiente"<<endl;
				cout<<endl;
				cout<<endl;
				asterisco=1;
				for(n=1;n<=filas;n++){
					for(int hueco=0;hueco<=(filas-n);hueco++) cout<<" ";
					for(int rep=1;rep<=asterisco;rep++) cout<<"*";
					for(int hueco=0;hueco<=(filas-n);hueco++) cout<<" ";
				asterisco+=2;
				cout<<endl;
				}
		break;
		}
		
	cout<<endl;
	cout<<endl;
	cout<<"Papá noel vio tu arbol y dejó los regalos."<<endl;
	cout<<"Presiona para verlo"<<endl;
	system("pause");

    // Imprime la tapa de la caja
    cout<<"     ___________________"<<endl;
    cout<<"    /                  /|"<<endl;
    cout<<"   /        :)        / |"<<endl;
    cout<<"  /                  /  |"<<endl;
	cout<<" /__________________/   |"<<endl;
	cout<<"|                   |   |"<<endl;
	cout<<"|                   |   |"<<endl;
	cout<<"|     Bo Nadal      |  /"<<endl;
	cout<<"|                   | /"<<endl;
	cout<<"| __________________|/"<<endl;

	cout<<endl;
	cout<<"Feliz Navidad y Prospero Año Nuevo"<<endl;
	cout<<endl;
	return 0;
}
