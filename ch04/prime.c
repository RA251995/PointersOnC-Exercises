#include <stdio.h>

int main()
{
    int i, j;
    int is_prime;

    for( i = 2; i <= 100; i += 1 )
    {
        is_prime = 1;
        for( j = 2; j <= i / 2; j += 1 )
        {
            if( i % j == 0 )
            {
                is_prime = 0;
                break;
            }
        }

        if( is_prime == 1 )
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
