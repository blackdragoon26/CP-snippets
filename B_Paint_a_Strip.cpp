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
//         if (n > 2)
//         {

//             int count = 0;

          

//             while (n >= 2)
//             {
//                   if (n % 2 == 1)
//             {
//                 n = n + 1;
//             }
//                 count = count + 1;

//                 n = (n / 2);
//             }
//             cout << count << "\n";
//         }
//         else
//         {
//             cout << n << "\n";
//         }
//     }
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int opscount=0;
    for(int i=1;i<=n;i=i+3){
        opscount++;
    }
    cout<<opscount<<"\n";
    }
}