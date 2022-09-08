#include <stdio.h>

/**
* main - Entry
* Return: Always 0 (Success)
*/
int main(void)
{
	char char;
	int int;
	long long int;
	long long long int;
	float float;


	printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(ainteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(along));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(alonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));
	return (0);
}
