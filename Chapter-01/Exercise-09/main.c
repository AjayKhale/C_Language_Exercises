#include <stdio.h>

int main()
{
  int curchar, lastchar;
  lastchar = 'a'; // intialize last character to some dummy character
  while ((curchar = getchar()) != EOF) {
    if (curchar != ' ') { // character is not blank
      putchar(curchar);
    }
    if ((curchar == ' ') & (lastchar != ' ')) { // Check current and last charter is blank
      putchar(curchar);
    }
    lastchar = curchar; // update last character with current character
  }
}