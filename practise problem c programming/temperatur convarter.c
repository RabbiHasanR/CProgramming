/*
 *
 * Kernighan & Ritchie - The C Programming Language
 * Exercise 1.4
 * Write a Program to print the corresponding Celsius to Fahrenheit table
 * Extension: Scanf
 *
 * Author: Denis Meyer, www.calltopower.de
 *
 */
#include <stdio.h>

#define LOWER_LIMIT 0
#define HIGHER_LIMIT 50000

int main(void) {
    double fahr, cel;
    int limit_low = -1;
    int limit_high = -1;
    int step = -1;
    int max_step_size = 0;

    /* Read in lower, higher limit and step */
    while(limit_low < (int) LOWER_LIMIT) {
        printf("Please give in a lower limit, limit >= %d: ", (int) LOWER_LIMIT);
        scanf("%d", &limit_low);
    }
    while((limit_high <= limit_low) || (limit_high > (int) HIGHER_LIMIT)) {
        printf("Please give in a higher limit, %d < limit <= %d: ", limit_low, (int) HIGHER_LIMIT);
        scanf("%d", &limit_high);
    }
    max_step_size = limit_high - limit_low;
    while((step <= 0) || (step > max_step_size)) {
        printf("Please give in a step, 0 < step >= %d: ", max_step_size);
        scanf("%d", &step);
    }

    /* Initialise Celsius-Variable */
    cel = limit_low;

    /* Print the Table */
    printf("\nCelsius\t\tFahrenheit");
    printf("\n-------\t\t----------\n");
    while(cel <= limit_high) {
        fahr = (9.0 * cel) / 5.0 + 32.0;
        printf("%f\t%f\n", cel, fahr);
        cel += step;
    }
    printf("\n");

    return 0;
}
