#include <stdio.h>

int substr( char dst[], char src[], int start, int len )
{
    int i, n;

    if( start >= len || start < 0 || len < 0 )
    {
        dst[0] = '\0';
        return 0;
    }

    n = len - start;
    for( i = 0; i < n; i += 1 )
    {
        dst[i] = src[start + i];
    }
    dst[n] = '\0';
    return n;
}

int main()
{
    char sub_str[1024];

    printf("%d -> ", substr(sub_str, "ABCD", 0, 4));
    printf("%s\n", sub_str);

    printf("%d -> ", substr(sub_str, "ABCD", 1, 4));
    printf("%s\n", sub_str);

    printf("%d -> ", substr(sub_str, "ABCD", 2, 4));
    printf("%s\n", sub_str);

    printf("%d -> ", substr(sub_str, "ABCD", 3, 4));
    printf("%s\n", sub_str);

    printf("%d -> ", substr(sub_str, "ABCD", 4, 4));
    printf("%s\n", sub_str);

    printf("%d -> ", substr(sub_str, "ABCD", 5, 4));
    printf("%s\n", sub_str);

    printf("%d -> ", substr(sub_str, "ABCD", -1, 4));
    printf("%s\n", sub_str);

    printf("%d -> ", substr(sub_str, "ABCD", 0, -1));
    printf("%s\n", sub_str);

    printf("%d -> ", substr(sub_str, "ABCDEFGH", 0, 4));
    printf("%s\n", sub_str);

    return 0;
}
