#include <stdio.h>

int main()
{
    float num;
    float prev_approx = 1;
    float approx;

    scanf("%f", &num);

    approx = num;
    while (approx != prev_approx)
    {
        prev_approx = approx;
        approx = (prev_approx + num / prev_approx) / 2;
        printf("%f\n", approx);
    }

    return 0;
}
