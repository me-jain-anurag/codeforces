#include <bits/stdc++.h>
using namespace std;

int res(int a, int b, int c)
{
    int q, w, e, r, t, y;
    
    q = a * b * c;
    w = (a + b) * c;
    e = a * (b + c);
    r = a + b + c;
    t = a + b * c;
    y = a * b + c;
    
    vector<int> x = {q, w, e, r, t, y};
    
    return *max_element(x.begin(), x.end());
}

int main()
{
    int a , b, c;
    cin >> a >> b >> c;
    
    cout << res(a, b, c);
    
    return 0;
}