#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
//thinking : what does the 1st elemet signify?
//if a[0] == 1 than can be sorted other wise no
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-- > 0){
        ll n;
        cin >> n;
        vector<ll> arr;
        for(int i =0; i < n; i++){
            ll x;
            cin >> x;
            arr.push_back(x);
        }
        if(arr[0] == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}