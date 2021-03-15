#include <stdio.h>

int main(void)
{
    unsigned char bin;

    bin = 0b00000010;
    bin <<= 2;

    printf("%X\n", bin);
    printf("HELLO GITHUB\n\n");

    return 0;
}