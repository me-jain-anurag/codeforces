#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, width, height;
    cin >> n >> h;
    
    width = n;
    for(int i = 0; i < n; i++)
    {
        cin >> height;
        if (height > h) width++;
    }
    
    cout << width;
    
    return 0;
}