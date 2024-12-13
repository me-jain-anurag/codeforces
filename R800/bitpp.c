#include <stdio.h>
#include <stdlib.h>

void solved(int *s)
{
    char input[3];
    scanf("%s", input);
    
    if (input[1] == '+') ++(*s);
    else --(*s);
}

int main()
{
    int n, s = 0;
    scanf("%d", &n);
    
    while (n--)
        solved(&s);
        
    printf("%d\n", s);
    
    return 0;
}