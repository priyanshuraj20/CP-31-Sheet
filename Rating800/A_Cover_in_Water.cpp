#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        int n;
        cin >> n; 
        string s;
        cin >> s; 
        
        
        bool cont_empty = false;
        int totalEmpty = 0;

       
        for (int i = 0; i < n; i++) 
        {
            
            if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
            {
                cont_empty = true; 
                break; 
            }
            if (s[i] == '.')
                totalEmpty++;
        }

        if (cont_empty)
            cout << 2 << endl;
        else
            cout << totalEmpty << endl;
    }
    return 0;
}

// Time Complexity (TC): O(n) = O(100)
// Space Complexity (SC): O(n) = O(100)