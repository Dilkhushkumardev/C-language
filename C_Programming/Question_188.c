#include <stdio.h>
int main()
{
  int num = 15;

  // Using ternary operator to check if the number is even or odd
  char *result = (num % 2 == 0) ? "Even" : "Odd";

  printf("The number %d is %s\n", num, result);
  return 0;
}
