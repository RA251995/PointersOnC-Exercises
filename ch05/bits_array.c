#include <stdio.h>

#define BIT_ARRAY_LEN 8

void set_bit( char bit_array[], unsigned bit_number )
{
    bit_array[bit_number] = '1';
}

void clear_bit( char bit_array[], unsigned bit_number )
{
    bit_array[bit_number] = '0';
}

void assign_bit( char bit_array[], unsigned bit_number, int value )
{
    if( value == 0 )
    {
        bit_array[bit_number] = '0';
    }
    else
    {
        bit_array[bit_number] = '1';
    }
}

int test_bit( char bit_array[], unsigned bit_number)
{
    if( bit_array[bit_number] == '0' )
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void print_bits( char bit_array[], unsigned len )
{
    int i;
    for( i = len - 1; i >= 0; i -= 1 )
    {
        putchar(bit_array[i]);
    }
    putchar('\n');
}

int main()
{
    char bit_array[BIT_ARRAY_LEN];
    int i;
    
    for( i = 0; i < BIT_ARRAY_LEN; i += 1 )
    {
        clear_bit( bit_array, i );
    }
    print_bits( bit_array, BIT_ARRAY_LEN );
    set_bit( bit_array, 1 );
    print_bits( bit_array, BIT_ARRAY_LEN );
    printf("%d\n", test_bit( bit_array, 0 ));
    printf("%d\n", test_bit( bit_array, 1 ));
    assign_bit( bit_array, 3, 1 );
    print_bits( bit_array, BIT_ARRAY_LEN );
    assign_bit( bit_array, 3, 0 );
    print_bits( bit_array, BIT_ARRAY_LEN );

    return 0;
}
