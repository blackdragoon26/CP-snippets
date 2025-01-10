#include <bits/stdc++.h>
using namespace std;

int main()
{
    string username;
    cin >> username;

    set<char> distinct_chars;

    for (auto c : username)
    {
        distinct_chars.insert(c);
    }

    if (distinct_chars.size() % 2 != 0)
    {
        cout <<  "IGNORE HIM!"<< "\n";
    }
    else
    {
        cout << "CHAT WITH HER!" << "\n";
    }
}
