#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string ans="";
        int n;
        cin>>n;
        if(n%2==0){
            ans+="1";
            for(int i=0;i<n-2;i++){
            ans+="0";}
            ans+="1";
            
        }
        else{
            for(int i=0;i<n;i++){
                if(i%2==0){
                    ans+="1";
                }
                else{
                    ans+="0";
                }
            }
        }
        cout<<ans<<endl;
    }

}