#include <bits/stdc++.h>
using namespace std;
int main()
{

    int l;
    cin >> l;
    while (l--)
    {
        int a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        int five = 5;
        while (five != 0)
        {

            if ((min(min(a, b), c)) == a)
            {
                a++;
                five--;
            }
            else if ((min(min(a, b), c)) == b)
            {
                b++;
                five--;
            }
            else
            {
                c++;
                five--;
            }
        }

        cout << a*b*c << endl;
    }
}