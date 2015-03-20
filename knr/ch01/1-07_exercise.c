#include <stdio.h>

main()
{
  int c;
  char val;
  
  val = ((c = getchar()) != EOF);
  printf("%i\n", val);
  printf("The value of EOF is: %d\n", EOF);
  return 0;
}
