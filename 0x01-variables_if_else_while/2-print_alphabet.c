#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: 1 (not success)
*/

int main(void)
{
    char alfa = 'a';
    while (alfa <='z')
    {
        putchar(alfa);
        alfa++;
    }
    putchar("\n");

    return(0);
}
