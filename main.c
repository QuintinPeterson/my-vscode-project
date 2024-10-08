#include <stdio.h>

/* print fahrenheight-celsius table
    for f = 0, 20, ..., 300 */
int main() { 
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.0f\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}