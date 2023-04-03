#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void getNumber(int *);
void calculateSum(int, int, int *);
void displayDetails(void);

int main() {
	int num1 = 0; 
	int num2 = 0; 
	int sum = 0;  
	printf("Please enter first number : ");
	getNumber(&num1);

	printf("Please enter second number: ");
	getNumber(&num2);

	calculateSum(num1, num2, &sum);
	printf("\nSum of %d and %d is: %d\n\n", num1, num2, sum);

	return 0;
}

void getNumber(int *num) {
	scanf("%d", num);
}

/* function to calculate the sum of two numbers */
void calculateSum(int number1, int number2, int *sum) {
	*sum = number1 + number2;
}

/* function to display details to the screen */
void displayDetails(void) {
	printf("Author : 蒋昊成\n");
	printf("Stud ID : 2118040119\n");
	printf("Email ID : 11816552452@qq.com\n");
	printf("This is my own work as defined by the\n");
	printf("University's Academic Misconduct Policy.\n\n");
}
