#include <stdio.h>

int main()
{
    int k, n, w, result;
    scanf("%d%d%d", &k, &n, &w );
    
    result = ((k * w * (w + 1)) / 2) - n;
    
    if (result < 0) printf("0");
    else printf("%d", result);

    return 0;
}