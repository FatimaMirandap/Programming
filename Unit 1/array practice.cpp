// array [10] llenar manualmente con un ciclo for para que el usuario escoja 
//cu�les numeros poner.
//ejemplo:
// 6, 0, 1, 3, 5, 8, 5, 7, 2, 6 almacenar en un array
//imprimir el primer, el quinto y el d�cimo lugar.
//6,8,6

#include<iostream>

using namespace std;

int main (){
	int n, i;
	
int array [10];//definir el tama�o del array

cout << "Insert 10 numbers: "<< "\n";//Instrucci�n al usuario

for(int i=0; i<10; i++){ //ciclo for para ingresar los 10 numeros.
	
	cout <<"";//Ingresar los numeros del array
	cin>> array[i]; //lugar en donde se van a almacenar los numeros del array
}

cout << "1st position: "<< array [0]<<"\n"; //Imprimir el numero que est� en la primera posici�n
cout << "5th position: "<< array [4]<<"\n"; //Imprimir el numero que est� en la quinta posici�n
cout << "10th position: "<< array [9]<<"\n"; // Imprimir el numero que est� en la d�cima posici�n

}


