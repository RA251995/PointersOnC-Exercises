#include <stdio.h>

int main()
{
    int ch;
    
    while( (ch = getchar()) != EOF )
    {
        if( ch >= 'A' && ch <= 'Z' )
        {
            ch += 13;
            if( ch > 'Z')
            {
                ch = 'A' + (ch - 'Z') - 1;
            }
        }
        else if( ch >= 'a' && ch <= 'z' )
        {
            ch += 13;
            if( ch > 'z')
            {
                ch = 'a' + (ch - 'z') - 1;
            }
        }
        putchar(ch);
    }

    return 0;
}
