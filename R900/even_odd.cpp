#include <iostream>
using namespace std;

int main()
{
    long long n, k, half;
    cin >> n >> k;
    
    half = (n + 1) / 2;
    if (k > half) cout << 2 * (k - half);
    else cout << (2 * k - 1);
    
    return 0;
}