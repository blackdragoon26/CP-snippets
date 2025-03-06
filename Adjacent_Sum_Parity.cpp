#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> b(n);
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((b[i] == 0)&&(i==0))
            {
                a.push_back(1);
                a.push_back(1);
            }
            else if((b[i]==1) && (i==0)){
                a.push_back(1);
                a.push_back(0);
            }
            else if (b[i] == 1)
            {
                a.push_back(0);
            }
            else if (b[i]==0){
                a.push_back(1);
            }

            if (a.size() == n - 1)
            {
                break;
            }
        }
    }
}
