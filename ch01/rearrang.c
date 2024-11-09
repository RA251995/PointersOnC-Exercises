#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLS 20
#define MAX_INPUT 1000

int read_column_numbers(int columns[], int max);
void rearrange(char *output, char const *input, int n_columns, int const columns[]);

int main(void)
{
    int n_columns;
    int columns[MAX_COLS];
    char input[MAX_INPUT];
    char output[MAX_INPUT];

    n_columns = read_column_numbers(columns, MAX_COLS);

    while (gets(input) != NULL && input[0] != '\0')
    {
        printf("Original input: %s\n", input);
        rearrange(output, input, n_columns, columns);
        printf("Rearranged line: %s\n", output);
    }

    return EXIT_SUCCESS;
}

int read_column_numbers(int columns[], int max)
{
    int num = 0;
    int ch;
    int i, j, min, min_idx;

    while (num < max && scanf("%d", &columns[num]) == 1 && columns[num] >= 0)
    {
        num += 1;
    }

    /* Sort columns */
    for (i = 0; i < num - 1; i++)
    {
        min = columns[i];
        min_idx = i;
        for (j = i + 1; j < num; j++)
        {
            if (columns[j] < min)
            {
                min = columns[j];
                min_idx = j;
            }
        }

        columns[min_idx] = columns[i];
        columns[i] = min;
    }

    if (num % 2 != 0)
    {
        columns[num] = -1;
        num += 1;
    }

    while ((ch = getchar()) != EOF && ch != '\n')
        ;

    return num;
}

void rearrange(char *output, char const *input, int n_columns, int const columns[])
{
    int col;
    int output_col;
    int len;

    len = strlen(input);
    output_col = 0;

    for (col = 0; col < n_columns; col += 2)
    {
        int nchars;
        
        if (columns[col + 1] == -1)
        {
            nchars = len - columns[col];
        }
        else
        {
            nchars = columns[col + 1] - columns[col] + 1;
        }

        if (columns[col] >= len || output_col == MAX_INPUT - 1)
            break;

        if (output_col + nchars > MAX_INPUT - 1)
            nchars = MAX_INPUT - output_col - 1;

        strncpy(output + output_col, input + columns[col], nchars);
        output_col += nchars;
    }

    output[output_col] = '\0';
}
