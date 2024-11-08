#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ch;
    int len;
    int line_num = 0;

    printf("Line number: %d\n", line_num++);
    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
        {
            printf("\nLine number: %d", line_num++);
        }
        putchar(ch);
    }

    return EXIT_SUCCESS;
}
