#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    cout << "I hate ";
    
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1) cout << "it";
        else if (i % 2 == 0) cout << "that I love ";
        else cout << "that I hate ";
    }
    
    return 0;
}