#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);

    if (x >= 1 && x <= 100)
    {
        printf("%.3f", x);
    }
    else
    {
        printf("Out of range");
    }

    return 0;
}

