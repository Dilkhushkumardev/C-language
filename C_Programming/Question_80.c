// Check wheather a sentence is palindrome or not
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX 100
int main() {
  char str[MAX];
  int i, len, flag = 1;

  printf("Enter a sentence: ");
  fgets(str, sizeof(str), stdin);

  // Remove newline character if present
  str[strcspn(str, "\n")] = 0;

  len = strlen(str);

  for (i = 0; i < len / 2; i++) {
    if (tolower(str[i]) != tolower(str[len - i - 1])) {
      flag = 0;
      break;
    }
  }

  if (flag)
    printf("The sentence is a palindrome.\n");
  else
    printf("The sentence is not a palindrome.\n");

  return 0;
}