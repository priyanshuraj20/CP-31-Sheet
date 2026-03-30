#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

bool check(string s, string x){
    if(x.size() < s.size()) return false;

    for(int i = 0; i < x.size() - s.size() + 1; i++){
        if(x.substr(i,s.size()) == s) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t-- > 0){
        ll n;
        ll m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;

        //creating x operation string:
        string x0 = x;
        string x1 = x+x;
        string x2 = x1+x1;
        string x3 = x2+x2;
        string x4 = x3+x3;
        string x5 = x4+x4;

        ll ans = -1;
        if(check(s,x0)){
            ans = 0;
        }else if(check(s,x1)) ans =1;
        else if(check(s,x2)) ans = 2;
        else if(check(s,x3)) ans = 3;
        else if(check(s,x4)) ans = 4;
        else if(check(s,x5)) ans =5;
       
        cout << ans << endl;

        }

    return 0;
}