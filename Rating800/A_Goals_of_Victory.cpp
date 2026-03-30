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
        int n;
        cin >> n;
        vector<int> arr(n-1);
        for(int i =0; i < n-1; i++){
            cin >> arr[i];
        }
        int sum = accumulate(arr.begin(),arr.end(),0);
        sum = 0 - sum;
        cout << sum << endl; 
    }

    return 0;
}