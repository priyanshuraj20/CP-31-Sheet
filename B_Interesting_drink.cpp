#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
// void solve(int x[], int n, int a) {
//     int s = 0;
//     int e = n - 1;
//     int ans = 0;
//     while (s <= e) {
//         int mid = s + (e - s) / 2;
//         if (x[mid] <= a) {
//             s = mid + 1;
//             ans = s;
//         } else {
//             e = mid - 1;
//         }
//     }
//     cout << s << endl;
// }
 
int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    
    int q;
    cin >> q;
    int a;
    int m;
    for (int i = 0; i < q; i++) {
        cin >> a;
        auto it = upper_bound(x.begin(),x.end(),a);
        cout << it - x.begin() <<endl;
    }
    
    return 0;
}