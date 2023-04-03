#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void function1(int);
void function2(int*);

int main() {
	int number = 10;
	printf("Value of number is: %d\n", number);
	printf("Address of number is: %p\n", (void*)&number);
	function1(number);
	printf("Value of number after call to function1 is: %d\n", number);
	function2(&number);
	printf("Value of number after call to function2 is: %d\n", number);
	return 0;
}

void function1(int number)
{
	number++;

	printf("Value of number in function1 is: %d\n", number);

	printf("Address of number is: %p\n", (void*)&number);
}

void function2(int *numberPtr)
{
	printf("Address of number is: %p\n", (void*)numberPtr);
	printf("Value of number in function2 is: %d\n", *numberPtr);
	(*numberPtr)++;
	printf("Value of number after increment in function2 is: %d\n", *numberPtr);
}

