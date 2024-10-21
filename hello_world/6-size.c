#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
 int main(void)
 {
    printf("Size of a char: %ld byte (s)\n", sizeof(char));
    printf("Size of a int: %ld byte (s)\n", sizeof(int));
    printf("Size of a a long int: %ld byte (s)\n", sizeof(unsigned int));
    printf("Size of a a long long: %ld byte (s)\n", sizeof(long long));
    printf("Size of a float: %ld byte (s)\n", sizeof(float));


    return (0);
 }
