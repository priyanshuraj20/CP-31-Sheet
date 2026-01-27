#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        vector<int> prefMex(n), sufMex(n);

        // prefix mex
        vector<int> freq(n + 2, 0);
        int mex = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] <= n) freq[a[i]]++;
            while (freq[mex] > 0) mex++;
            prefMex[i] = mex;
        }

        // suffix mex
        fill(freq.begin(), freq.end(), 0);
        mex = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] <= n) freq[a[i]]++;
            while (freq[mex] > 0) mex++;
            sufMex[i] = mex;
        }

        bool ok = true;

        for (int i = 0; i < n - 1; i++) {
            if (prefMex[i] == sufMex[i + 1]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}
