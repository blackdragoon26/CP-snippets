#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];

        }
        int invitation=0;
        while(invitation<=2){
        for(int i=1;i<=n;i++){
            if(i==p[i]){
                invitation=invitation+2;

            }   
         }

        }


    }
}