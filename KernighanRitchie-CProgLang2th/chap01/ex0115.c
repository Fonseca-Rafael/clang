#include <stdio.h>

/* print Fahrenheit-Celsius table
 *  for fahr = 0, 20, ..., 300 */

float toCelsius(int fahr);

main()
{
    float   fahr;
    int     lower;
    int     upper;
    int     step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while(fahr <= upper){
        printf("%3.0f %6.1f\n", fahr, toCelsius(fahr));
        fahr = fahr + step;
    }
}

float toCelsius(int fahr)
{
    float celsius;

    celsius = (5.0/9.0) * (fahr-32.0);

    return celsius;
}
