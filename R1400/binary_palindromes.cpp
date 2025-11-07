#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int o = 0, res = 0;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            if (s.size() & 1) {
                o++;
            }
            else {
                if (count(s.begin(), s.end(), '0') % 2 == 1) res++;
            }
        }

        if (o > 0) {
            cout << n << endl;
        }
        else {
            cout << n - (res % 2) << endl;
        }
    }
}