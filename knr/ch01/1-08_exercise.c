#include <stdio.h>

/* count various inputs
nl = new lines
bl = blank lines
tb = tabs

***Please note***
Ctrl + C; Kills the program.
Ctrl + Z, Enter; Signals EOF in Windows.
Ctrl + D; Signals EOF in Linux.

*/
main()
{
  char c;
  int nl, bl, tb;
  nl = bl = tb = 0;
  while((c = getchar()) != EOF)
  {
    if (c == '\n'){
         ++nl;
    }
    if (c == ' '){
         ++bl;
    }
    if (c == '\t'){
         ++tb;
    }
  }
  printf("new-lines:%d\n blanks:%d\n tabs:%d\n", nl,bl,tb);
}
