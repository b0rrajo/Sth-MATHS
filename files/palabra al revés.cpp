//Librerias
#include<iostream>
using namespace std;

//Variable
string w1;
int longitud;

//programa principal
int main(){
	cout<<"SoMATH 1.7 - La palabra al revés"<<endl;
	cout<<endl;
	cout<<"Introduce una palabra para escribirla al revés"<<endl;
	cout<<"-> ";
	cin>>w1;
	cout<<endl;
	cout<<"Tu palabra al revés sería: ";
	longitud=w1.length();
	for(int a=longitud; a>=0; a--){
		cout<<w1[a];
	}
	cout<<endl;
	cout<<endl;
	cout<<"Gracias por usar el programa"<<endl;
	return 0;
}
