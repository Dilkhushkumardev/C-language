// W.A.P TO find the sum of all even numbers between 1 to n using recursion.
#include <stdio.h>
int sumEven(int n)
{
  if (n <= 0)
  {
    return 0;
  }
  if (n % 2 == 0)
  {
    return n + sumEven(n - 2);
  }
  else
  {
    return sumEven(n - 1);
  }
}
int main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("Sum of even numbers between 1 and %d is %d\n", n, sumEven(n));
  return 0;
}