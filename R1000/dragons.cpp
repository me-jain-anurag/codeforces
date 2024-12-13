//learned pair and used sort

#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n, s;
    cin >> s >> n;
    pair<int, int> arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    
    sort(arr, arr + n);
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i].first >= s)
        {
            cout << "NO";
            return 0;
        }
        s += arr[i].second;
    }
    
    cout << "YES";
    return 0;
}