//Arrays
#include<iostream>

/*
int array0[0];

//array specific size
int array1[10];

int n=10
int array2[1]; //podemos utilizar las variables para declarar arrays

//initilize arrays with specific values
int array3 [6] = {0, 1, 2, 3, 4, 5};
*/
using namespace std;
int main(){
	
	int arr[5]; //declaring array size _,_,_,_,_

arr[0]= 5; // 5,_,_,_,_
arr[2]=-10; // 5,_,-10,_,_

arr[15 / 3]= 2; // 5,_,-10,_,2
arr[3] = arr[0]; //5,_,-10,5,2

cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<" "<<arr[5];


return 0;
	
}






