#include <stdio.h>
/**
 * main - Program that prints a string with printf
 * Return: 0
 */
int main(void)
{
  char cha;
  int i;
  long int li;
  long long int lli;
  float f;

   printf("Size of a char: %d byte(s)\n", sizeof(cha));
   printf("Size of a int: %d byte(s)\n", sizeof(i));
   printf("Size of a long int: %d byte(s)\n", sizeof(li));
   printf("Size of a long long int: %d byte(s)\n", sizeof(lli));
   printf("Size of a float: %d byte(s)\n", sizeof(f));
  return (0);
}
