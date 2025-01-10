// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         int blueprint[n] ={0};
//         int flag = 0;
//         int temp;
//         for (int i = 0; i < n; i++)
//         {   
//             temp = a[i];
//             blueprint[temp] = 1; // 0 0 0 1 1

//             for (int j = 0; j < n; j++)
//             {
//                 if (blueprint[j] == 0 && blueprint[j + 1] == 1 && blueprint[j - 1] == 1)
//                 {
//                     if ((j == 1 || blueprint[j - 2] != 0) && (j == blueprint.length - 2 || blueprint[j + 2] != 0))
//                     {
//                         flag = 1;
//                         break;
//                     }
//                 }
//             }
//         }
//         if (flag == 0)
//         {
//             cout << "yes\n";
//         }
//         else
//         {
//             cout << "no\n";
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
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> blueprint(n, 0);
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            int temp = a[i];
            blueprint[temp] = 1; 

            for (int j = 1; j < n - 1; j++) 
            {
                
                if (blueprint[j] == 0 && blueprint[j - 1] == 1 && blueprint[j + 1] == 1)
                {
                  
                    if ((j == 1 || blueprint[j - 2] != 0) && (j == n - 2 || blueprint[j + 2] != 0))
                    {
                        flag = true;
                        break;
                    }
                }
            }
        }

        if (!flag)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }

    return 0;
}
