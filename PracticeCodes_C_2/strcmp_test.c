#define LEN 8

int my_strcmp(const char *s1, const char *s2) {
    for (int i = 0; i < LEN; ++i) {
        if (s1[i] != s2[i]) return 0;
    }
    return 1;
}

#include <stdio.h>

int main() 
{
    int x = 0b10101110;  /* binary representation of 174 */
    
    /* Select the 4th bit using a bit mask and the bitwise AND operator */
    /*int bit4 = (x & (1 << 3)) >> 3;
    
    printf("The 4th bit of x is %d\n", bit4); /* should print 1 */
    
    // set the upper nibble to value 5 retaining lower nibble -> 4 bits
    x = (x & 0x0f) | ((5 & 0x0F)<<4);
    printf("Value of x after upper nibble change is 0x%02X\n", x);
    
    //Extract Bits 2 to 5 (Shifted to LSB)
    int shifted_x = x >> 2;
    printf("Shifted 2 to 5 to LSB: 0x%02X\n", shifted_x);
    return 0;

}