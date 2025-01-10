#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n;
        cin>>k;
        
        vector<int> a(n);
        unordered_map<int, int> freq;
        
       
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        
        int total_cards = n;
        
       
        for (auto &entry : freq) {
            int count = entry.second;
            
           
            int operations = count / k;
            
            
            total_cards -= operations;
        }
        
        
        cout << total_cards << "\n";
    }
    
    return 0;
}
