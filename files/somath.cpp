//listado de librerias
#include<iostream>
using namespace std;

//listado de Variables
int n1, n2; //números
int n3; //resultado
int n4; //variable de control

//Programa
int main() {
	cout<<"SoMATH V1.1 - ALPHA"<<endl;
	cout<<endl;
	cout<<"Programa para operaciones sencillas de aritmetica"<<endl;
	cout<<endl;
	cout<<"Introduce 2 números que sean: Positivos, menores de 30"<<endl;
	cout<<"cualquien numero introducido que no cumpla estos valores, el programa dará error"<<endl;
	cout<<"se cerrará y tendrá que volver a empezar"<<endl;
	
	//1º solicita números
	cout<<"Introduce el 1º Número:";
	cin>>n1;
	while(n1>30 || n1<-1){
		cout<<"ha introducido u valor no permitido en el programa"<<endl;
		cout<<"Por favor recarge el programa"<<endl;
		return 0;
	}
	cout<<"Introduzca el 2º Número"<<endl;
	cin>>n2;
	while(n2>30 || n2<-1){
		cout<<"ha introducido un valor no valido en el programa"<<endl;
		cout<<"por favor recargue el programa"<<endl;
		return 0;
	}
	
	//2º - Seleccionar operaciones
	cout<<"Se han recibido los números, eliga la operacion que desea realizar<<"<<endl;
	cout<<"En resumen: usted ha escrito:"<<n1<<" y "<<n2<<endl;
	cout<<"Elija con la letra lo que desea hacer:"<<endl;
	cout<<"1 - Suma de números"<<endl;
	cout<<"2 - Resta de números"<<endl;	
	cout<<"3 - Multiplicación de números"<<endl;
	cout<<"4 - División de números"<<endl;
	cout<<endl;
	cout<<"Que desea hacer:"<<endl;
	cin>>n4;
	switch(n4){
		case(1): n3=n1+n2;
			cout<<"La suma de "<<n1<<" + "<<n2<<" = "<<n3<<endl;
		break;
		case(2): n3=n1-n2;
			cout<<"La resta de "<<n1<<" - "<<n2<<" = "<<n3<<endl;
		break;
		case(3): n3=n1*n2;
			cout<<"el producto de "<<n1<<" x "<<n2<<" = "<<n3<<endl;
		break;
		case(4): n3=n1/n2;
			cout<<"El cociente de "<<n1<<" / "<<n2<<" = "<<n3<<endl;
		break;
	}


	return 0;
}
