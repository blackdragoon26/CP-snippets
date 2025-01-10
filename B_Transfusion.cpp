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
        int a[n];
        int balance = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }

        // int sum=0;
        if (sum % n != 0)
        {
            cout << "no\n";
        }
        else
        {

            int target = sum / n;

            int diff = 0;

            for (int i = 1; i < n - 1; i++)
            {
                diff = a[i] + balance - target;
            }
            if (diff > 0)
            {
                cout << "no\n";
            }
            balance = diff;

            if (balance == 0)
            {
                cout << "yes\n";
            }
            else
            {
                cout << "no\n";
            }
        }
    }
}