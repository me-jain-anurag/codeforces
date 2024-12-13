//long long data type for a <= 10^9
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n, m, a, s, d;
    scanf("%lld%lld%lld", &n, &m, &a);
    
    if (n % a == 0) s = (n / a);
    else s = (n / a + 1);
    
    if (m % a == 0) d = (m / a);
    else d = (m / a + 1);
    
    printf("%lld\n", s * d);
    
    return 0;
}