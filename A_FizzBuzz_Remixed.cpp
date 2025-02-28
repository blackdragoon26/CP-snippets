#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long count=3*(n/15);
        // for(long long i=0;i<n;i++){
        //     if(i%15==0){
        //         count++;
        //     }
        // }
        long long remainder=n%15;
        if (remainder >= 0) count++; 
        if (remainder >= 1) count++; 
        if (remainder >= 2) count++;  
        cout<<count<<endl;
    }
}