#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %te(s)\n", sizeof(char));
	printf("size of an int: %te(s)\n", sizeof(int)); 
        printf("size of a long int: %te(s)\n", sizeof(long int)); 
	printf("size of a long long int: %te(s)\n", sizeof(long long int)); 
	printf("size of a float: %te(s)\n", sizeof(float)); 
	return (0);    

}
