#include <stdio.h>
#include <string.h>

void deblank( char string[] )
{
    int str_len;
    int i, j;

    i = 0;
    while( string[i] != '\0' )
    {
        if( string[i] == '\t' || string[i] == '\n' ||
            string[i] == '\v' || string[i] == '\f' ||
            string[i] == '\t' )
        {
            string[i] = ' ';
        }
        i += 1;
    }
    str_len = i;

    for( i = 0; i < str_len - 1; i += 1 )
    {
        if( string[i] == ' ' )
        { 
            while( string[i + 1] == ' ' )
            {
                for( j = i + 1; j < str_len - 1; j += 1 )
                {
                    string[j] = string[j + 1];
                }

                str_len -= 1;
                string[str_len] = '\0';
            }
        }
    }
}

int main()
{
    char string[] = "  A B CD  E   F  \tHI\tJ  \n K           ";
    deblank(string);
    printf("%d - |%s|\n", strlen(string), string);

    return 0;
}
