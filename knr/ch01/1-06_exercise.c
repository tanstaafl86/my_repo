#include <stdio.h>

/* copy input to output; 2nd version */
main()
{
  int c;
  char val;
  
  val = ((c = getchar()) != EOF);
  printf("%i\n", val);
  return 0;
}
