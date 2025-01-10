// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;

//     cin >> t;
//     while (t--)
//     {
//         string a;
//         cin >> a;
//         if (a[0] == '1')
//         {
//             if (a[1] == '0')
//             {

//                 if (a[2] == '0')
//                 {
//                     cout << "No" << "\n";
//                 }
//                 else
//                 {
//                     string flat = a.substr(2, a.size());
//                     cout << flat << "\n";
//                     if (stoi(flat) >= 2)
//                     {
//                         cout << "Yes" << "\n";
//                     }
//                     else
//                     {
//                         cout << "No" << "\n";
//                     }
//                 }
//             }
//             else
//             {
//                 cout << "No" << "\n";
//             }
//         }
//         else
//         {
//             cout << "No" << "\n";
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        if (a[0] == '1')
        {
            if (a[1] == '0')
            {
                if (a[2] == '0' ||( a[2] == '1'&& a.size() == 3))
                {
                    cout << "No" << "\n";
                }
                else
                {
                    cout << "Yes" << "\n";
                }
            }
        }
        else
        {
            cout << "No" << "\n";
        }
    }
}