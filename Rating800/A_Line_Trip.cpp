#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t-- > 0){
        ll  n;
        ll x;
        cin >> n >> x;
        vector<ll> arr;
        arr.push_back(0);   //starting point 
        for(int i =0; i < n; i++){
            ll j;
            cin >> j;
            arr.push_back(j);
        }
        arr.push_back(x);   //ending point 
        n = arr.size();
        ll maxDis = INT_MIN;
        for(int i =1; i < n; i++){
            if(i == n-1){
                maxDis = max(maxDis, 2 * (arr[i] - arr[i-1]));
            }else{
                maxDis = max(maxDis,(arr[i] - arr[i-1]));
            }
        }
        cout << maxDis << endl;
    }
    return 0;
}