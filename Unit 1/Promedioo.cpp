/*Calculate the first 3 notes of n students*/ 

#include "iostream"
#include "string"
#include <conio.h>
#include <stdio.h>

using namespace std;

int main (){
	int n, suma = 0, nota1, nota2, nota3;
	double promedio;
	
	
	for(int i=0; i<3; i++){
	
		cout<< "Student: "<<i+1<<endl;
		
		cout<<"Note 1: ";
		cin>>nota1;
		
		cout<< "Note 2: ";
		cin>> nota2;
		
		cout << "Note 3: ";
		cin>> nota3;
		
			
		suma = nota1 + nota2 + nota3;
		promedio = suma/3;
	
		cout<< "The notes of the student are: "<<promedio<< endl;
	}
}
