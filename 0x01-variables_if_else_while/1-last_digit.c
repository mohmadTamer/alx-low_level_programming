#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>

int main(void)
{
int n , lastD;

srand(time(0));
n = rand() - RAND_MAX / 2;
/*your code goes there */

lastD = abs(n % 10);
if(lastD>5)
    printf("Last digit of %d is %d and is greater than 5", n ,lastD);
else if(lastD==0)
    printf("Last digit of %d is %d and is 0", n , lastD);
else if(lastD<6 || lastD!=0)
    printf("Last digit of %d is %d and is less than 6 and not 0", n , lastD);
return (0);
}
