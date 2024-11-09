#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed char cs = -1;
    int ch;

    while((ch = getchar()) != EOF)
    {
        cs += ch;
    }
    printf("%d\n", cs);

    return EXIT_SUCCESS;
}
