#include <stdio.h>
#include <string.h>

#define DST_STR_LEN (8)

void copy_n( char dst[], char src[], int n )
{
    int i = 0;
    while( src[i] != '\0' && i < n )
    {
        dst[i] = src[i];
        i += 1;
    }

    for ( ; i < n; i += 1 )
    {
        dst[i] = '\0';
    }
}

void print_dst(const char *dst, int len)
{
    int i;

    for( i = 0; i < len; i += 1 )
    {
        if( dst[i] == '\0' )
        {
            putchar('0');
        }
        else
        {
            putchar(dst[i]);
        }
    }

    putchar('\n');
}

int main()
{
    char dst[DST_STR_LEN];

    copy_n(dst, "ABCD", DST_STR_LEN);
    print_dst(dst, DST_STR_LEN);

    copy_n(dst, "ABCDEFGHIJKL", DST_STR_LEN);
    print_dst(dst, DST_STR_LEN);

    copy_n(dst, "ABCDEFG", DST_STR_LEN);
    print_dst(dst, DST_STR_LEN);

    return 0;
}
