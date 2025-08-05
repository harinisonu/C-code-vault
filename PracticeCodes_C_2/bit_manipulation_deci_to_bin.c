// Bit Manipulations -> Bit Set, Clear and Toggle operations.
// Convert Decimal to Binary.

#include <stdio.h>
#define REG 0b10100001

void print_binary(int reg_val)
{
    int i = 0;
    int bin[32] = {0}; // Initialize all elements to 0

    // Convert to binary representation
    while (reg_val > 0) {
        bin[i] = reg_val & 1; // Store the least significant bit
        reg_val = reg_val >> 1; // Right shift to process next bit
        i++;
    }

    // Print binary representation (in reverse order for human readability)
    printf("Binary value: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");
}

int main()
{
    // Set bit in register
    int pos = 2; // Position of the bit to set
    int reg_val, bit_value;
    bit_value = (REG >> pos) & 1;
    printf("Bit Value: %d\n", bit_value);
    reg_val = REG | (1 << pos); // Set bit at `pos`
    // Print binary representation
    print_binary(reg_val);
    bit_value = (reg_val >> pos) & 1;
    printf("Bit Value: %d\n", bit_value);
    // Clear bit in register
    reg_val = REG & ~(1 << pos);
    print_binary(reg_val);
    //toggle bit in register
    reg_val = REG ^ (1 << 5);
    print_binary(reg_val);
    return 0;
}