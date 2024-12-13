#include <iostream>
#define rep(x, a, b) for(int x = (int)(a); x < (int)(b); x++)

using namespace std;

int main()
{
    int n, xs = 0, ys = 0, zs = 0;
    cin >> n;
    
    while(n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        xs += x;
        ys += y;
        zs += z;
    }
    if(xs == 0 && ys == 0 && zs == 0) cout << "YES";
    else cout << "NO";
}