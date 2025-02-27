#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string regex_pattern = ".*h.*e.*l.*l.*o.*";
    regex pattern(regex_pattern);

    cout << (regex_match(s, pattern) ? "YES" : "NO") << endl;
}