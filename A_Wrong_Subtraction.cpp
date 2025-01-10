#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;


    int digitcount = 0;
    int dup = n;

    while (dup != 0)
    {
        digitcount++;
        dup = dup / 10;
    }

    if(digitcount>1){
    while (k != 0 & digitcount > 1)
    {

        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }

        k--;

        int digitcount = 0;
        int dup = n;

        while (dup != 0)
        {
            digitcount++;
            dup = dup / 10;
        }
    }

    cout << n;
    }
    else{
        cout<<n-k;
    }
}