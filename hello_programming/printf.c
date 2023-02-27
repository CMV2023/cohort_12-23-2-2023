#include <stdio.h>

int main(void)
{
	int age = 35;
	char name = 'm';
	float b = 9.27;
	
	char name_12[8] = {'O', 'm', 'o', 'w', 'a', 'l', 'e'};

	printf("The age is: %d\n", age);
	printf("My name is: %c\n", name);
	printf("The float is: %.3f\n", b);
	printf("Your name is: %s", name_12);

	return (0);
}
