#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-->0){
        int n;
        int k;
        cin >> n;
        cin >> k;
        vector<int> arr;
        bool flag = false;
        for(int i =0; i < n; i++){
            int x;
            cin >> x;
            arr.push_back(x);
            if(x == k) flag = true;
        }
        if(flag){
            cout << "YES" << endl;

        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}