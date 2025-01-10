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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int max = 0;
        int eflag = 0;
        int oflag = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                eflag++;
            }
            else if (a[i] % 2 == 1)
            {
                oflag++;
            }
        }
        int temp = 0;
        int count = 0;
        while (eflag != n || oflag != n)
        {

            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 1; j < n; j++)
                {
                    if (a[i] % 2 == 0 && a[j] % 2 == 1)
                    {

                        temp = a[i] + a[j];
                        a[min(a[i], a[j])] = temp;
                        count++;
                    }
                    else if (a[i] % 2 == 1 && a[j] % 2 == 0)
                    {
                        temp = a[i] + a[j];
                        a[min(a[i], a[j])] = temp;
                        count++;
                    }
                }
            }

            eflag = 0;
            oflag = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    eflag++;
                }
                else if (a[i] % 2 == 1)
                {
                    oflag++;
                }
            }
        }
        cout << count << "\n";
    }
}