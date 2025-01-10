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

        int total = 0;
        int an = n;
        int bn = n;
        int cn = n;
        int dn = n;

        for (int i = 0; i < 4 * n; i++)
        {

            if (s[i] == 'A' && an > 0)
            {
                total++;
                an--;
            }
            else if (s[i] == 'B' && bn > 0)
            {
                total++;
                bn--;
            }
            else if (s[i] == 'C' && cn > 0)
            {
                total++;
                cn--;
            }
            else if (s[i] == 'D' && dn > 0)
            {
                total++;
                dn--;
            }
        }

        cout << total << "\n";
    }
}