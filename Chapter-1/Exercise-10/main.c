#include <stdio.h>

int main()
{
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {          // check for tab
      printf("%s", "\\t");
    } else if (c == '\b') {    // chekc for backspace
      printf("%s", "\\b");
    } else if (c == '\\') {   // check for backslash
      printf("%s", "\\\\");
    } else {
      putchar(c);
    }
  }
}