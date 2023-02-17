#include <stdio.h>

/**
 * main - represnt the main function of the task
 *
 * Return: should be 0 when successful
 */

int main(void)
{
	char number;
	int age;
	long int num;
	long long int nums;
	float doc;
	printf("Size of a char: %lu byte(s)\n", sizeof(number));
	printf("Size of an int: %lu byte(s)\n", sizeof(age));
	printf("size of a long int: %lu byte(s)\n", sizeof(num));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(nums));
	printf("Size of a float: %lu byte(s)\n", sizeof(doc));
	return (0);

}
