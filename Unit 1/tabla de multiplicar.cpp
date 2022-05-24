/* Realice un programa que solicite la entrada de un
un numero entero del 1 al 100 y muestre en la salida
tabla de multiplicar*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int num;
	do { 
		cout<< "Digite un numero: "; cin >> num; 
	} while ((num<1)||(num>10)); 
	
	for(int i=1; i<=20; i++) {
		cout<<num<< "*"<<i<<"="<<num*i<<endl;
	}
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
