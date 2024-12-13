#include <stdio.h>
#include <stdlib.h>

int solved()
{
    int p, v, t;
    scanf("%d%d%d", &p, &v, &t);
    
    if (p + v + t < 2) return 0;
    return 1;
}

int main()
{
    int n, s = 0;
    scanf("%d", &n);
    
    while (n--)
        s += solved();
        
    printf("%d", s);
    
    return 0;
}