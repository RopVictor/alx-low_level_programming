#include <stdio.h>


/**
 * main - Prints the size of various type
 * based on ide used
 * return: Always 0.
 */
int main(void)
{
	printf("Size of a char: % zu bytes(s)\n", sizeof(char));
	printf("Size of an int : % zu byte(s)\n", sizeof(int));
	printf("Size of a long int: % zu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: % zu bytes(s)\n", sizeof(long long int));	  printf("Size of a float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
