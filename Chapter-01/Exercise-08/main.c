#include <stdio.h>

int main()
{
  int c, bs, tb, nl;
  bs = tb = nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ')   // Check for blanks
      ++bs;
    if (c == '\t')  // Check for tab
      ++tb;
    if (c == '\n')  // Check for newline
      ++nl;
  }

  printf("Blanks = %d\n", bs);
  printf("Tabs = %d\n", tb);
  printf("New lines = %d\n", nl);
}