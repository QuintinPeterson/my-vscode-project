#include <stdio.h>

/* print fahrenheight-celsius table
    for f = 0, 20, ..., 300 */
int main() { 
    int lower, upper, step; // declaring variables with type int (integers)
    int fahr, celsius; // declaring variables with type float (floating point)

    /* More basic data types: 
        char: character - a single byte
        short: short integer
        long: long integer
        double: double-precision floating point */



    lower = 0; // setting the variables to their starting values (lower limit)
    upper = 300; // upper limit
    step = 20; // step size

    fahr = lower;
    printf("Fahr-Celsius Conversion Table\n");
    while (fahr <= upper) { // while loop. condition in parantheses is tested and code is ran while true
        celsius = 5 * (fahr-32.0) / 9;
        printf("%d\t%d\n", fahr, celsius); /* %4.0 says float number is to be printed in a space atleast 4 characters wide 
                            with no digits after the decimal point. %6.1f is 6 spaces and 1 decimal point */ 
        fahr += step;
    }
    return 0;
}