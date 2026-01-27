#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T-->0){
       int n;
       cin >> n;
       string s;
       string t;
       cin >> s;
       cin >> t;
    vector<int> freqS(26);
    vector<int> freqT(26);
    for(int i =0;i < n; i++){
        char ch1 = s[i];
        char ch2 = t[i];
        freqS[ch1 - 'a']++;
        freqT[ch2 - 'a']++;
       
    }
    bool flag = true;
    for(int i =0; i < 26;i++){
        if(freqS[i] != freqT[i]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    }
}
