#include <stdio.h>

int store_bit_field( int original_value, int value_to_store, unsigned starting_bit, unsigned ending_bit )
{
    unsigned mask;
    int new_value;
    
    mask =  (~(-1 << (ending_bit - starting_bit + 1))) << starting_bit;
    new_value = original_value & ~mask;
    new_value |= (value_to_store << starting_bit) & mask;

    return new_value;
}

int main()
{
    printf( "%x\n", store_bit_field( 0xF0F0, 3, 4, 7 ) );
    printf( "%x\n", store_bit_field( 0xF0F0, 0xF3, 4, 7 ) );
    printf( "%x\n", store_bit_field( 0xF0F0, 0xF3, 4, 10 ) );
    printf( "%x\n", store_bit_field( 0xF0F0, 0xF3, 4, 11 ) );
    printf( "%x\n", store_bit_field( 0xF0F0, 0x3, 12, 15 ) );
    printf( "%x\n", store_bit_field( 0xF0, 0x3, 12, 15 ) );

    printf( "%x\n", store_bit_field( 0xF0F0, 0x3, 16, 17 ) );
    printf( "%x\n", store_bit_field( 0xF0F0, 0x3, 20, 23 ) );
    printf( "%x\n", store_bit_field( 0x30F0F0, 0x30, 24, 31 ) );

    return 0;
}
