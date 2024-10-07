#include <stdio.h>

int main() {
    // c-style type casting
    float f = 69.69;
    int i = (int)f;
    printf("%d\n", i);  // Output: 69 ( rounded down since decimal is truncated (deletes the .69 part) )
    // to char
    char c = (char)i;
    printf("%c\n", c);  // Output: E (ASCII value of 69 -> https://www.asciitable.com/)

    float* ptr = &f;
    printf("%d\n", (int)*ptr); // Get the value from the address and then cast to int.

}