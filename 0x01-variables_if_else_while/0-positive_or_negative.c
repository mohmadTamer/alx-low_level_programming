#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    int n ;

    srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

    if (n<0)
    {
        printf("%d is negative",n);
    }else if (n>0)
    {
        printf("%d is positive",n);
    }else
    {
        printf("%d is Zero",n);
    }
    
    return (0);

}
