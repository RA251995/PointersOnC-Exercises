#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LEN    1000

int main()
{
    char buffer[MAX_LINE_LEN], max_len_line[MAX_LINE_LEN];
    int len, max_len = 0;

    while(gets(buffer) != NULL)
    {
        len = strlen(buffer);
        if (len >= max_len)
        {
            strcpy(max_len_line, buffer);
            max_len = len;
        }
    }

    puts(max_len_line);

    return EXIT_SUCCESS;
}
