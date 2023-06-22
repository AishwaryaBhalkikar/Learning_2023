#include <stdio.h>
#include <stdlib.h>

int main() {
    int decimal = 42;
    char binary[33]; 
    char octal[12]; 
    char hexadecimal[9]; 

 
    itoa(decimal, binary, 2);

  
    sprintf(octal, "%o", decimal);

 
    sprintf(hexadecimal, "%X", decimal);


    printf("Decimal: %d\n", decimal);
    printf("Binary: %s\n", binary);
    printf("Octal: %s\n", octal);
    printf("Hexadecimal: %s\n", hexadecimal);

    return 0;
}
