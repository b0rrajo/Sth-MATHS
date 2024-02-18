//librerias
#include<iostream>
#include<stdio_ext.h>
#include<stdlib.h>
using namespace std;

//Lista de variables base
int n1, n2, n3;
string f1;

//lista de variables lista

//lista de variables estructuras
struct nuevacancion{
	int n4;
	string nombreartista;
	string nombrepista;
	float duracionpista;
	float tamanopista;
};
nuevacancion lista[100];

//-------------------------------


void opciones(){
	switch(n1){
		case(1): cout<<"Cuantas vas a registra?: ";
				 cin>>n2;
				 
				 for(int a=1; a<=n2; a++){
					 lista[a].n4=a;
					 cout<<endl;
					 cout<<"Nueva canción - ";
					 cout<<"Nº registro: "<<lista[a].n4<<endl;
					 cout<<"---------------------------------"<<endl;
					 cout<<"1 - Nombre del artísta: ";
					 cin>>lista[a].nombreartista;
					 __fpurge(stdin); 
					 cout<<endl;
					 cout<<"2 - Nombre de la canción: ";
					 cin>>lista[a].nombrepista;
					 __fpurge(stdin); 
					 cout<<endl;
					 cout<<"3 - Duración de la pista: ";
					 cin>>lista[a].duracionpista;
					 __fpurge(stdin); 
					 cout<<endl;
					 cout<<"4 - Tamaño de la canción: ";
					 cin>>lista[a].tamanopista;
					 __fpurge(stdin); 
					 cout<<endl;
					 cout<<"Datos guardados"<<endl;
				 }
		break;
		case(2):  	 cout<<"------------------------------------------------------------"<<endl;
					 cout<<"    		  Lista de canciones registradas		        "<<endl;
					 cout<<"------------------------------------------------------------"<<endl;
					 cout<<endl;
					 cout<<"              ----------------------------------------------"<<endl;
					 cout<<"              | canción | artista | Duración | Tamaño (MB) |"<<endl;
					 
					 for(int a=1; a<=n2; a++){
					 lista[a].n4=a;
					 cout<<"------------------------------------------------------------"<<endl;
					 cout<<" Canción Nº "<<a<<" | "<<lista[a].nombrepista<<" | "<<lista[a].nombreartista<<" | "<<lista[a].duracionpista<<" | "<<lista[a].tamanopista<<" |"<<endl;	 
				 }
					 cout<<"------------------------------------------------------------"<<endl;
		break;
		case(3): cout<<"============================================"<<endl;
				 cout<<" Indique por que tipo de datos desea buscar "<<endl;
				 cout<<"============================================"<<endl;
				 cout<<endl;
				 cout<<"1 - Busqueda por artista"<<endl;
				 cout<<"2 - Busqueda por titulo de canción"<<endl;
				 cout<<endl;
				 cout<<"-> ";
				 cin>>n3;
				 switch(n3){
					 case(1): cout<<"Indica el nombre del artista: ";
							  cin>>f1;
							  for(int a=1; a<=n2; a++){
								lista[a].n4=a;
								if(f1==lista[a].nombreartista){
									cout<<endl;
									cout<<"Se han encontrado los siguientes resultados"<<endl;
									cout<<endl;
									
									cout<<"              ----------------------------------------------"<<endl;
					                cout<<"              | canción | artista | Duración | Tamaño (MB) |"<<endl;
									cout<<"------------------------------------------------------------"<<endl;
					                cout<<" Canción Nº "<<a<<" | "<<lista[a].nombrepista<<" | "<<lista[a].nombreartista<<" | "<<lista[a].duracionpista<<" | "<<lista[a].tamanopista<<" |"<<endl;
								}
								else{
									cout<<"No se ha encontrado ningun resultado en la lista"<<endl;
									cout<<"Intentelo de nuevo ->";
									cin>>f1;
								}
							  }
					break;
					case(2): cout<<"Indica el nombre de la canción: ";
							  cin>>f1;
							  for(int a=1; a<=n2; a++){
								lista[a].n4=a;
								if(f1==lista[a].nombrepista){
									cout<<endl;
									cout<<"Se han encontrado los siguientes resultados"<<endl;
									cout<<endl;
									
									cout<<"              ----------------------------------------------"<<endl;
					                cout<<"              | canción | artista | Duración | Tamaño (MB) |"<<endl;
									cout<<"------------------------------------------------------------"<<endl;
					                cout<<" Canción Nº "<<a<<" | "<<lista[a].nombrepista<<" | "<<lista[a].nombreartista<<" | "<<lista[a].duracionpista<<" | "<<lista[a].tamanopista<<" |"<<endl;
								}
								else{
									cout<<"No se ha encontrado ningun resultado en la lista"<<endl;
									cout<<"Intentelo de nuevo ->";
									cin>>f1;
								}
							  }
					break;
				 }
}
	
}

void mainmenu(){
	cout<<endl;
	cout<<"========================"<<endl;
	cout<<"     Menú principal     "<<endl;
	cout<<"------------------------"<<endl;
	cout<<"1 - Nuevos datos        "<<endl;
	cout<<"2 - Ver datos           "<<endl;
	cout<<"3 - Buscar              "<<endl;
	cout<<"4 - Salir del programa  "<<endl;
	cout<<"========================"<<endl;
	cout<<endl;
	cout<<"Elige una opción del menú -> ";
	cin>>n1;
	if(n1==4){
		return;
	}
	opciones();
	mainmenu();
}

//Programa principal
int main(){
	cout<<"======================================"<<endl;
	cout<<"SoMATH 1.8 - Datos canciones v1.0"<<endl;
	cout<<"======================================"<<endl;
	mainmenu();
	
	cout<<"Gracias por utilizar el programa"<<endl;
	return 0;
}
