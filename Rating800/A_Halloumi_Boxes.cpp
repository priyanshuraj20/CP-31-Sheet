#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-- > 0){
        ll n;
        ll k;
        cin >> n >> k;
        vector<ll> arr(n);
        for(int i =0; i < n; i++){
            cin >> arr[i];
        }
       bool sorted= is_sorted(arr.begin(),arr.end());
       if(sorted || k > 1) cout << "YES\n";
       else cout << "NO\n";
            
    }

    return 0;
}