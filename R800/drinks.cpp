#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<double> p(n);
    double sum = 0.0;
    
    for (double &x : p)
    {
        cin >> x;
        sum += x;
    }
    
    double res = sum / n;
    cout << fixed << setprecision(9) << res;
    
    return 0;
}