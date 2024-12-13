#include <stdio.h>

int main()
{
    int l, b, year = 0;
    scanf("%d%d", &l, &b);

    while (l <= b)
    {
        l *= 3;
        b *= 2;
        year++;
    }

    printf("%d", year);

    return 0;    
}