#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
while(T-- >0){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i < n;i++){
        cin >> a[i];
    }
    int maxi = 0;
    // cout<<maxi<<endl;
    for(int i =0; i < n; i++){
        int sum =0;
        // cout<<sum<<endl;
        for(int j = i; j < n;j++){
            sum+= a[j];
            int avg = sum/(j-i+1);
            maxi = max(maxi,avg);
        }
    }
    cout << maxi << endl;

}
}