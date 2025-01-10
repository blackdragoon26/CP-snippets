#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        int xcounter = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (m-sum > 0)
            {

                xcounter++;
                sum = sum + (s[i].length());
            }
            else
            {
                break;
            }

        }
        if(sum>m){cout<<xcounter-1<<"\n";}
        else{cout << xcounter << "\n";}
    }
}