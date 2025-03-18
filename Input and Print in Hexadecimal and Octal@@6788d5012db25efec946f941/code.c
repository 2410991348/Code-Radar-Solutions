#include <stdio.h>

int main() {
    int num;
    
    // Take input from the user
    scanf("%d", &num);
    
    // Print hexadecimal and octal representations
    printf("Hexadecimal: %X\n", num); // %X for hexadecimal (uppercase letters)
    printf("Octal: %o\n", num);       // %o for octal
    
    return 0;
}