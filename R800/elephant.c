#include <stdio.h>

int main()
{
    int n, res = 0;
    scanf("%d", &n);

    res += (n / 5);
    n %= 5;
    res += (n / 4);
    n %= 4;
    res += (n / 3);
    n %= 3;
    res += (n / 2);
    n %= 2;
    res += n;

    printf("%d", res);

    return 0;
}