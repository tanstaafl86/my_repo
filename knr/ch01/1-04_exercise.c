#include <stdio.h>

/* print Celsius-Fahrenheit table 
   for fahr = 0, 20, ..., 300; floating-point version */
main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;    /* lower limit of temperature table */
  upper = 300;  /* upper limit */
  step = 20;    /* step size */

  celsius = lower;
  printf("Celsius\t Fahrenheit\n");
  while (celsius <= upper) {
    fahr = (1.8 * celsius) + 32.0;
    printf("%6.1f %10.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
