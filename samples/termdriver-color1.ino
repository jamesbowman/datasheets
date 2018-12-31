#include <stdio.h>

int main()
{
  int attr, fg, bg;

  printf(
   "TermDriver listens on a serial line and emulates a "
   "terminal, generating\noutput on a standard VGA connector."
   "It gives embedded microcontrollers\na real console.\n\n");
  for (attr = 0; attr <= 1; attr++) {
    for (fg = 30; fg <= 37; fg++) {
      for (bg = 40; bg <= 47; bg++) {
        printf("\e[%d;%d;%dm%d;%d;%d\e[m",
               attr, bg, fg, attr, bg, fg);
      }
      printf("\n");
    }
  }
  
  return 0;
}
