//librerias
#include<iostream>
using namespace std;

//variables

int n1, n2, n3, n4;

void asteriscar(){
	cout<<"El numero introducido se corresponde con la siguiente cantidad de asteriscos: ";
	for(int a=0; a<30; a++){
		cout<<"*";
		}
	}

//programa
int main(){
	cout<<"SoMATH 1.4 - Asteriscar 1.0 "<<endl;
	cout<<endl;
	cout<<"Indique cualquier valor entre 10 y 30 para que se represente su equivalente en asteriscos"<<endl;
	cout<<"No se podrá utilizar cualquier otro valor, si nó, el progama fallará"<<endl;
	
	//funcion 1
	cout<<"Indique el número: ";
	cin>>n1;
	while(n1<10 || n1>30){
		cout<<endl;
		cout<<"Ha habido un error y el programa no puede continuar"<<endl;
		cout<<"por favor reinicie e intentelo de nuevo";
		return -1;
	}
	
	//funcion 2
	asteriscar();
	cout<<endl;
	
	cout<<"Gracias por usar SoMath, hasta pronto"<<endl;
	return 0;
}
