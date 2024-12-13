#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[5][5], i, j, moves = 0;
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &n[i][j]);
            if (n[i][j] == 1)
                moves += (abs(i - 2) + abs(j - 2));
        }
    }
    
    printf("%d", moves);
    return 0;
}