#include <stdio.h>

int main(void) {
	int age = 45;
	char grade = 'A';
	char name[] = "Aaron";

	printf("Hello World!~\n");
	printf("My name is %s.\n", name);
	printf("I`m %d years old.\n",age);
	printf("\tI want a %c grade.\n", grade);
	return 0;
}