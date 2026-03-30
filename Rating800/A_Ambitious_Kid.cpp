#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        int n;
        cin >> n;
        int minimum = INT_MAX;
        
        for(int i =1; i <= n; i++){
            int x;
            cin >> x;
            
            minimum = min(minimum,abs(x));
           
        }
        
        cout << minimum << endl;

    return 0;
}