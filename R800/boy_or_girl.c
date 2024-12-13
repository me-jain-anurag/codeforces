#include <stdio.h>
#include <stdbool.h>

int main()
{
    char s[100];
    int i, uchar = 0;
    bool new[26] = {false};
    scanf("%s", s);
    
    for (i = 0; s[i]; i++)
    {
        if (new[s[i] - 'a'] == true) continue;
        new[s[i] - 'a'] = true;
        uchar++;
    }
    
    if (uchar % 2 == 0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
    
    return 0;
}