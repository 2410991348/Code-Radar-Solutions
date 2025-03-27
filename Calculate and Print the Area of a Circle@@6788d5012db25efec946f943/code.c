#include <stdio.h>

int main() {
    float radius;
    float pi = 3.14; // Value of Pi

    // Input: radius of the circle
    scanf("%f", &radius);

    // Calculate the area of the circle
    float area = pi * radius * radius;

    // Output: printing the area
    printf("Area: %.2f\n", area);

    return 0;
}