#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        // if(n>=2*k-1){
        //     cout<<"yes\n";
        // }
        // else {
        //     cout<<"no\n";
        // }

        if(n%2==1){
            if((n/2)+1>=k){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }

        }
        else if(n%2==0){
            if(n/2>=k){
                cout<<"YES\n";
            }
             else{
                cout<<"NO\n";
            }

        }
        else{cout<<"NO\n";}
    
    
    }


}
