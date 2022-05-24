
findelement(int array[], int llave, int size){
	//loop to transverse and search for key
	for(int i=0; i<size; i++){
		if (array[i] == llave){
			printf ("The position is: %d", i+1); //print position
			break; 
		}
	}
}
