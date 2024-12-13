#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    long long l, r, k;
    std::cin >> l >> r >> k;
    
    if (k > (r / l))
    {
        std::cout << 0 << "\n";
        return;
    }
    
    std::cout << (r / k) - l + 1 << "\n";
    
    return;
    
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}