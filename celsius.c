#include <stdio.h>

/* print Celsius-Fahrenheit table
 *   for fahr = 0, 20, ..., 300; floating-point version */

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;      /* lower limit of temperature table */
  upper = 75;    /* upper limit */
  step = 3;      /* step size */

  celsius = lower;


  printf("Celcius\t\tFahrenheit\n");
  while (celsius <= upper) {
    fahr = (5.0/9.0) * (celsius+32.0);
    printf("  %3.0f       \t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
