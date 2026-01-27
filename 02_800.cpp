// 1901A - Line Trip
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        int x;
        cin >> n;
        cin >> x;
        vector<int> v(n);
       for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int max_gap = v[0] - 0;
        for(int i = 1; i < v.size();i++){
            max_gap = max(max_gap, v[i] - v[i-1]);
        }
        int last_stretch = 2 * (x - v[n-1]);
    max_gap = max(max_gap, last_stretch);

    cout << max_gap << endl;
}
    }

