#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n;
        cin>>k;
        for(int i=1;i<=n*n;i=i*i){

            if(((4*i)-2)>=k){ 
                cout<<i<<"\n";
                break;
            }
        }    }
}