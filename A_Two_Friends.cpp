#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int fla=0;

        for(int i=0;i<n;i++){
            if(a[a[i]-1]==i+1){
                cout<<2<<"\n";
                fla=1;
                break;
                
            }
           


        }

        if(fla==0){
            cout<<3<<"\n";
        }
        else{}


       
    }
}