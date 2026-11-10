#include <stdio.h>
#include <stdlib.h>

/* print Celsius-Fahrenheit table 
 * for cels = 0, 20, ..., 30;  floatinq-point version */

int main()
{
    printf("Celsius-Fahrenheit Conversion\n");
    float cels, fahr;
    int lower, upper, step;
    
    lower = -20;    /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
    
    cels = lower;
    while (cels <= upper) {
        fahr = (9.0/5.0) * cels + 32.0;
        printf("%3.0f %6.1f\n", cels, fahr);
        cels = cels + step;
    }
    return EXIT_SUCCESS;
}
