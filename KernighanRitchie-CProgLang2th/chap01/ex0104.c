#include <stdio.h>

/* print Celsius-Fahrenheit table
 *  for celsius = 0, 15, 20..., 50 */

main()
{
    float   fahr;
    float   celsius;
    int lower;
    int upper;
    int step;

    lower   = 0;      /* lower limit of temperature table */
    upper   = 50;    /* upper limit */
    step    = 5;      /* step size */

    celsius = lower;
    while(celsius <= upper){
        fahr = ((9.0/5.0) * celsius)+32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
