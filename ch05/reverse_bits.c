#include <stdio.h>

#define TOTAL_BITS (sizeof(unsigned int) * 8)

unsigned int reverse_bits( unsigned int value )
{
    unsigned int rev_value = 0;
    int i, j;

    for( i = 0, j = TOTAL_BITS - 1; i < TOTAL_BITS; i += 1, j -= 1 )
    {
        rev_value |= ((value & (1 << j)) >> j) << i;
    }

    return rev_value;
}

int main()
{
    printf("%u\n", reverse_bits(25));

    return 0;
}
