#include "main.h"

/**
  * print_alphabet_x10 - print the aphlabet 10 times
  *
  *return: nill
  */

void print_alphabet_x10(void)
{
int a;
char b;

for (a = 0; a < 10; ++a)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
