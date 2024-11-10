#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three side lengths: ");
    scanf("%d %d %d", &a, &b, &c);

    if( a == b && b == c )
    {
        printf("Equilateral\n");
    }
    else if ( a != b && b != c && a != c )
    {
        printf("Scalene\n");
    }
    else
    {
        printf("Isosceles");
    }

    return 0;
}
