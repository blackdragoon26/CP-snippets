#include <bits/stdc++.h>
using namespace std;

void getNumberPattern(int n)
{
    // Write your code here.
    int ans = 4;
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= i; j--)
        {
            ans = j;

            cout << ans;
            for(int k=n+n-2;k>1;k--){
                cout<<ans;
            }
            ans--;
        }

        cout << "\n";
    }
    
}

int main()
{
    int n;
    cin >> n;
    getNumberPattern(n);
}