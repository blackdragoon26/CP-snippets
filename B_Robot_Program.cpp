#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long zeroctr = 1;
    long long n;
    long long x;
    long long k;
    cin >> n >> x >> k;
    string s;
    cin >> s;
    
    bool f = 0;
    for (long long i = 0; i < n; i++)
    {

        if (x == 0)
        {
            f = 1;
            break;
        }
        if (k == 0)
        {
            cout << 0 << endl;
            return;
        }

        if (s[i] == 'L')
        {
            x--;
            
        }
        else if (s[i] == 'R')
        {
            x++;
            
        }
        k--;
    }
    if (f == 0 && x != 0)
    {
        cout << 0 << endl;
        return;
    }
    
    long long tp = 0;
  
    f = 0;
    for (long long i = 0; i < n; i++)
    {

        if (s[i] == 'L')
        {
            x--;
           
        }
        else if (s[i] == 'R')
        {
            x++;
          
        }
        tp++;

        if (x == 0)
        {
            f = 1;
            break;
        }
    }
    if (f)
    {
        zeroctr=zeroctr+( k / tp);
    }

    cout << zeroctr << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
}
