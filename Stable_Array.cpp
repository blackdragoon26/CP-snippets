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
//         int seconds = 0;
//         bool changed = true;

//         while (changed)
//         {
//             changed = false;
//             for (int i = 0; i < n - 1; i++)
//             {
//                 if (a[i] < a[i + 1])
//                 {
//                     a[i] = a[i + 1];
//                     changed = true;
//                 }
//             }
//             if (changed)
//             {
//                 seconds++;
//             }
//         }

//         // for(int j=0;j<n;j++){
//         //      int flag=0;
//         // for(int i=0;i<n-1;i++){
//         //     if(a[i+1]>a[i]){
//         //             a[i]=a[i+1];
//         //             flag=1;
//         //     }
//         // }
//         // if (flag==1){
//         //     seconds++;
//         // }
//         // }
//         cout << seconds << "\n";
//     }
// }

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
//         vector<int> a(n);
//         int seconds;
//         int flag = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             if (i == 0)
//             {
//                 continue;
//             }
//             else if (a[i] > a[i - 1])
//             {
//                 flag = 1;
//             }
//         }
//         if (flag == 1)
//         {
//             int maxi = *max_element(a.begin(), a.end());
//             int mini = *min_element(a.begin(), a.end());
//             cout << maxi - mini << "\n";
//         }
//         else
//         {
//             cout << 0 << "\n";
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int seconds = 0;
        bool changed = true;

        while (changed == true)
        {
            changed = false;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] < a[i + 1])
                {
                    a[i] = a[i + 1];
                    changed = true;
                }
            }
            if (changed)
            {
                seconds++;
            }
        }

        cout << seconds << "\n";
    }

}
