#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char a[n];
        int duppcheck=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                duppcheck++;
            }
        }
        if(duppcheck==n-1){
            cout<<1;
        }
        

     

    }
}