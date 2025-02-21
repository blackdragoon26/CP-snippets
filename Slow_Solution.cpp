#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        long long maxt,maxn,sumn;
        cin>>maxt;
        cin>>maxn;
        cin>>sumn;
        int p=min(sumn/maxn,maxt);
        long long ans=(p*(maxn*maxn));
        
        long long remaining = sumn - (p * maxn);
        if(remaining>0){
            if(p<maxt){
           ans=ans+(remaining*remaining);
        }}
        cout.setf(ios::fixed);
        cout<<setprecision(0)<<ans<<endl;
        
        
    }
	// your code goes here
	 

}