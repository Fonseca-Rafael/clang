#include <stdio.h>

/* print Fahrenheit-Celsius table
 *  for fahr = 0, 20, ..., 300 */

main()
{
    int fahr;
    int celsius;
    int lower;
    int upper;
    int step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    printf("========================\n");
    printf("Fahrenheit\tCelsius\n");
    while(fahr <= upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%3d\t\t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
