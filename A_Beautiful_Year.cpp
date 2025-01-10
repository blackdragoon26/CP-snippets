#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;
    int a = n + 1;
    string b = to_string(a);
    int flag = 0;

    for (int i = 0; i < size(b) - 1; i++)
    {
        if (b[i] == b[i + 1])
        {
            b[i + 1] = static_cast<char>((int(b[i + 1]) + 1));
        }
    }
    cout<<b<<endl;


}