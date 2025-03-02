#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int lo = 0, hi = 1e9, ans = 0;
        while (lo <= hi)
        {
            int mid = lo + (hi-lo) / 2;
            int cnt = 0, f = 1; // defaulting redd
            for (int i = 0; i < n; i++)
            {
                if (a[i] <= mid)
                {
                    continue;
                }

                if ((s[i] == 'R') ^ f)
                {
                    cnt += f;
                    f ^= 1;
                }
            }

            if (cnt <= k)
            {
                ans = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
            
        }
        cout << ans << endl;
    }
}