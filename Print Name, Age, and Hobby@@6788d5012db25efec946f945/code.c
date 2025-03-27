#include <stdio.h>

int main() {
    char name[100], hobby[100];
    int age;

    // Input: name, age, and hobby
    scanf("%s %d %s", name, &age, hobby);

    // Output: printing the name, age, and hobby in separate lines
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}