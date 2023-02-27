#include <stdio.h>

int main(void)
{
	int a;
	char b;
	int long c;
	int long long d;
	float e;

	printf("size of int is: %lu byte(s)\n", sizeof(a));
	printf("size of char is: %lu byte(s)\n", sizeof(b));
	printf("size of int long is: %lu byte(s)\n", sizeof(c));
	printf("size of int long long is: %lu byte(s)\n", sizeof(d));
	printf("size of float is: %lu byte(s)\n", sizeof(e));


}
