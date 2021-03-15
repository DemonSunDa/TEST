#include <stdio.h>

int main(void)
{
    // int L;
    unsigned char L;
    L = 0b0011;
    L <<= 4;
    // L = L << 2;
    printf("%X\n", L);
}