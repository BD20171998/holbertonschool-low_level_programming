#include <stdio.h>
/**                                                                                                                           * main - Program that prints a string with printf                                                                            * @cha: this is a variable
 * @i: this is a variable
 * @li: this is a variable 
 * @lli: this is a variable 
 * @f: this is a variable    
 * Return: 0                                                                                                                  */
int main(void)
{
  char cha;
  int i;
  long int li;
  long long int lli;
  float f;

  printf("Size of a char: %i byte(s)\n", sizeof(cha));
  printf("Size of an int: %i byte(s)\n", sizeof(i));
  printf("Size of a long int: %i byte(s)\n", sizeof(li));
  printf("Size of a long long int: %i byte(s)\n", sizeof(lli));
  printf("Size of a float: %i byte(s)\n", sizeof(f));
  return (0);
}
