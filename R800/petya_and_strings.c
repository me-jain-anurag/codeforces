#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[101], s2[101];
    int i, diff;
    scanf("%s%s", s1, s2);
    
    for(i = 0; s1[i] != '\0'; i++)
    {
        diff = tolower(s1[i]) - tolower(s2[i]);
        
        if (diff > 0)
        {
            printf("1");
            return 0;
        }
        
        if (diff < 0)
        {
            printf("-1");
            return 0;
        }
    }
    
    printf("0");
    return 0;
}