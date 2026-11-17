// Check whether a sentence is palindrome or not
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
  char str[MAX];
  int left, right, flag = 1;

  printf("Enter a sentence: ");
  fgets(str, sizeof(str), stdin);

  // Remove newline character if present
  str[strcspn(str, "\n")] = 0;

  left = 0;
  right = strlen(str) - 1;

  while (left < right) {
    while (left < right && !isalnum((unsigned char)str[left])) {
      left++;
    }
    while (left < right && !isalnum((unsigned char)str[right])) {
      right--;
    }
    if (tolower((unsigned char)str[left]) != tolower((unsigned char)str[right])) {
      flag = 0;
      break;
    }
    left++;
    right--;
  }

  if (flag)
    printf("The sentence is a palindrome.\n");
  else
    printf("The sentence is not a palindrome.\n");

  return 0;
}
