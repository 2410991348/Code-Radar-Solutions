#include <stdio.h>

int main() {
    int a, b, c;

    // Take three integers as input
    scanf("%d %d %d", &a, &b, &c);

    // Calculate the average
    float average = (a + b + c) / 3.0;

    // Print the average with 2 decimal precision
    printf("Average: %.2f\n", average);

    return 0;
}