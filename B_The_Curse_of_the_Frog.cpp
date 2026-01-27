#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        long long base = 0;
        long long best = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            long long a, b, c;
            cin >> a >> b >> c;

            base += (b - 1) * a;          
            best = max(best, b * a - c);  
        }

        if (base >= x) {
            cout << 0 << "\n";
            continue;
        }

        if (best <= 0) {
            cout << -1 << "\n";
            continue;
        }

        long long need = x - base;
        long long ans = (need + best - 1) / best;  
        cout << ans << "\n";
    }
    return 0;
}
