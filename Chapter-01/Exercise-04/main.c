#include <stdio.h>

/* print Celsius-Fahrenheit table
    for Celsius = 0, 20, ..., 300 */
int main()
{
  float fahr, celsius;
  float lower, upper, step;
  lower = 0; /* lower limit of temperature scale */
  upper = 300; /* upper limit */
  step = 20; /* step size */
  celsius = lower;
  printf("%7s %6s\n","celsius","fahr");
  while (celsius <= upper) {
    fahr = (celsius * (9.0/5.0)) + 32.0;
    printf("%7.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}