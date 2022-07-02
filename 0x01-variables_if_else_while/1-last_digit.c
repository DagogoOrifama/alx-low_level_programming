#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -> print last digit in random number
 *
 * Description: print last digit in random number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, last;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
if (n > 5)
printf("greater than 5");
else if (n == 0)
printf("Last digit is equal to zero");
else if (n < 6 && n != 0)
printf("Less than 6 not zero");
return (0);
}
