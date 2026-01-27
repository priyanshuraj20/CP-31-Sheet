// 1903A - Halloumi Boxes

#include <iostream>
#include <vector>
using namespace std;

// function must be OUTSIDE main
bool isSorted(vector<int>& v) {
    for (int i = 0; i < (int)v.size() - 1; i++) {
        if (v[i] > v[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if (isSorted(v)) {
            cout << "YES\n";
        } else if (k == 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
