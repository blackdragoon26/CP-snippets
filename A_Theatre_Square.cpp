#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n;
    cin >> m;
    cin >> a;
    
    
    long long length = (n + a - 1) / a;
    long long width = (m + a - 1) / a;
    
  
    long long total = length * width;
    
    cout << total<< endl;

    
}
