// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     vector<int> b(n);
//     for (int i = 0; i < n; i++)
//     {
//       cin >> a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//       cin >> b[i];
//     }
//     while (n > n - 1)
//     {
//       a.erase(a.begin());
//       b.erase(b.begin());
//       n--;
//     }
//     if (a[0] == b[0])
//     {
//       cout << "Bob" << "\n";
//     }
//     else
//     {
//       cout << "Alice" << "\n";
//     }
//   }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    
    int number;
    number=n;
    while(number!=n){
      if (a[0] == b[0]) {
      cout << "Bob" << "\n";
    } else {
      cout << "Alice" << "\n";
    }
  }
  number--;
    }





      
  return 0;
}