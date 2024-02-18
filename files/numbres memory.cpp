//librerias incluidas
#include<iostream>
using namespace std;

//lista de variables
int listaxe[6];
int i;

//funcion principal
int main(){
	cout<<"memoriza los números V1.0"<<endl;
	cout<<endl;
	
	//introduce numeros
	cout<<"Indica los números"<<endl;
	for(i=0; i<4; i++){
		cout<<"introduce 4 numeros que sean: Enteros y positivos"<<endl;
		cin>>listaxe[i];
	}
	
	cout<<"Usted introduzco estos números:"<<endl;
	for(i=0; i<4; i++){
		cout<<listaxe[i]<<", ";
	}
	
	return 0;
}
