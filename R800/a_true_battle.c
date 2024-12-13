#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    while (t--)
    {
        int n, z = 0, o = 0;
        scanf("%d", &n);
        char *b = (char*)malloc(n*sizeof(char));
        
        scanf("%s", b);
        
        for(int i = 0; *(b + i) != '\0'; i++)
        {
            if (*(b + i) == '0') z++;
            else o++;
        }
        
        if (z <= o) printf("yes\n");
        else printf("no\n");
    }
    
    return 0;
}