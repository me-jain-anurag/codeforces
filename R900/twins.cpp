#include <iostream>
#include <vector>
#include <algorithm>
#define rep(x, a, b) for(x = (int)(a); x < (int)(b); x++)

using namespace std;

int main()
{
    int n, sum = 0, greedy = 0, i = 0;
    cin >> n;
    vector<int> a(n);
    
    rep(i, 0, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    
    sort(a.begin(), a.end(), greater<int>());
    
    rep(i, 0, n)
    {
        greedy += a[i];
        if (greedy > sum / 2) break;
    }
    
    cout << i + 1;
}