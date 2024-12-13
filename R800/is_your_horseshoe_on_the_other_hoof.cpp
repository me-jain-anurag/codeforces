#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s1 ,s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    
    set<long long> num;
    
    num.insert(s1);
    num.insert(s2);
    num.insert(s3);
    num.insert(s4);
    
    int res = 4 - num.size();
    
    cout << res;
    
    return 0;
}