#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.%c", 'a');
    len2 = printf("Let's try to printf a simple sentence.%c %s\n", 'a', "mateo");
    printf("Length:[%d, %i]\n", len, len2);
    return (0);
}
