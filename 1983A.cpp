#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int a[n];
        // for (int k=1;k<=n;k++){
        //     int sum=0;
        //     for(int i=1;i<=n;i++){
        //         if(i%k==0){
        //             sum=sum+i;
                    
                    
        //         }
        //     }
        for(int i=1;i<=n;i++){
            a[i-1]=i;

        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }




        }
    cout<<endl;




}