// Check whether a sentence is a palindrome or not
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int main()
{
  char str[MAX];
  int start = 0, end;
  int flag = 1;

  printf("Enter a sentence: ");
  fgets(str, sizeof(str), stdin);

  // Remove newline character if present
  str[strcspn(str, "\n")] = 0;

  end = strlen(str) - 1;

  while (start < end)
  {
    // Skip non-alphanumeric characters (spaces, punctuation)
    while (start < end && !isalnum((unsigned char)str[start]))
    {
      start++;
    }
    while (start < end && !isalnum((unsigned char)str[end]))
    {
      end--;
    }

    if (tolower((unsigned char)str[start]) != tolower((unsigned char)str[end]))
    {
      flag = 0;
      break;
    }
    start++;
    end--;
  }

  if (flag)
    printf("The sentence is a palindrome.\n");
  else
    printf("The sentence is not a palindrome.\n");

  return 0;
}