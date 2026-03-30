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
        vector<int> arr(n);
        for(int i =0; i < n; i++){
            cin >> arr[i];
        }
        map<int,int> table;
        for(int i =0; i < n; i++)
        {
            table[arr[i]]++;
        }
        if(table.size() > 2){
            cout << "NO" << endl;
        }
        else {
            int freq1 = table.begin()->second;
            int freq2 = table.rbegin()->second;

            if(freq1 == freq2) {
                cout << "YES" << endl;
            }
             else if (n % 2 == 1 && abs(freq1 - freq2) == 1) 
                cout << "YES" << endl; 
            else
                cout << "NO" << endl;
                
        }
        
    }

    return 0;
}