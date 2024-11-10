#include <stdio.h>
#include <string.h>

#define MAX_LINE_LEN 128

int main()
{
    char line[MAX_LINE_LEN];
    char prev_line[MAX_LINE_LEN] = "";
    int prev_pair_same = 0;

    while( gets(line) != NULL )
    {
        if( strcmp(line, prev_line) == 0 )
        {
            if (prev_pair_same == 0)
            {
                puts(line);
            }
            prev_pair_same = 1;
        }
        else
        {
            prev_pair_same = 0;
        }

        strcpy(prev_line, line);
    }

    return 0;
}
