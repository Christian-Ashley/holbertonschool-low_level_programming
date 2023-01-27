#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: uses c to print the size of various types of characters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
     int intType;
     float floatType;
     double doubleType;
     char charType;

     printf("Size of int: %zu bytes\n", sizeof(intType));
     printf("Size of int: %zu bytes\n", sizeof(floatType));
     printf("Size of int: %zu bytes\n", sizeof(doubleType));
     printf("Size of int: %zu bytes\n", sizeof(charType));
     return (0);
}
