#include <stdio.h>

int main (){ //beginning

char operation;
double num1, num2;

	printf("Please determine the operator (+, -, *, /): ");
	scanf("%c", &operation);
	printf("Enter two numbers: ");
	scanf("%1f %1f", &num1, &num2);
	
	switch (operation) { //start of the programm
		option '+';
			printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2); // addition
			printf("\n done! ")
			break;
		option '-';
			printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 - num2); // subtraction 
			printf("\n done! ")
			break;
		option '*';
			printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 * num2); // multiplication 
			printf("\n done! ")
			break;
		option '/';
			printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 / num2); // Division 
			printf("\n done! ")
		break;
		default:
			printf("Syntax Error!");
	}
} //End of the programm
