#include <stdlib.h>
#include <time.h>
#inclue <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

if (n>0)
{
printf("the number is positive");
 
}
else if (n==0)
{
printf("the number is 0");

}
else
{
printf("the number is negative");

}
	
return (0);
}
