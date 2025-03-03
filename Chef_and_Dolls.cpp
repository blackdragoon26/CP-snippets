// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    int a[n];
// 	    map<int,int> mp;
// 	    for(int i=0;i<n;i++){
// 	        cin>>a[i];
// 	        mp[a[i]]++;
// 	    }
// 	    for(auto o:mp){
// 	        if(o.second!=2){
// 	            cout<<o.first<<endl;
// 	            break;
// 	        }
// 	    }
	    
// 	}

// }

//holy dfffff

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            ans ^= t;
        }
        cout << ans << endl;
    }
    
    
}