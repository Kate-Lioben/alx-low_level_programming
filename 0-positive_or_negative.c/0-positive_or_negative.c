#include <stdio.h>



/* betty style doc for function main goes there */

/**

 * main - Entry point

 *

 * Return: Always 0 (Success)

 */

int main(void)

{

README.md int n;



README.md srand(time(0));

README.md n = rand() - RAND_MAX / 2;

README.md if (n > 0)

README.md {

README.md README.md printf("%i is positive\n", n);

README.md }

README.md else if (n == 0)

README.md {

README.md README.md printf("%i is zero\n", n);

README.md }

README.md else if (n < 0)

README.md {

README.md README.md printf("%i is negative\n", n);

README.md }



README.md return (0);

}
