#include <stdio.h>

#define WORD_BEGIN  1 // Word is started
#define WORD_END    0 // Word is Ended

int main()
{
  int c, word_state;
  word_state = WORD_END;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (word_state == WORD_BEGIN) {
        putchar('\n');
        word_state = WORD_END;
      }
    } else if (word_state == WORD_END) {
      word_state = WORD_BEGIN;
      putchar(c);
    } else {
      putchar(c);
    }
  }
}