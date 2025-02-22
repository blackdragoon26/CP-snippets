#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a;
        cin>>b;
        cin>>x;

      
            if(x*x>=a*b)
            {
                cout<<0<<"\n";
            }
            else if(min(a,b)>x*x){
                cout<<2<<"\n";
            }
           
            else{
                cout<<1<<"\n";
            }
       
    }
}