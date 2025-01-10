#include <bits/stdc++.h>
using namespace std;
// #define int long long

int main() {
  int t;
  cin >> t;
  while (t--) {

    int n;
    int m;
    cin >> n;
    cin >> m;
    int k;
    cin >> k;
    

    int color = n * m;
   

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {

 

        if (n - i >= k) {

          color--;
        }

        else if (m - j >= k) {
          color--;
        }
      }
    }

    cout << color << "\n";
  }
}