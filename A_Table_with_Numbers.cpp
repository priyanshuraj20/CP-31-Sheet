#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;

        int A = 0, B = 0, C = 0;
        int mn = min(h, l);

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x <= h) A++;
            if (x <= l) B++;
            if (x <= mn) C++;
        }

        int U = A + B - C;              
        int ans = min({A, B, U / 2}); 
        cout << ans << "\n";
    }
    return 0;
}
