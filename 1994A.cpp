#include<bits/stdc++.h>
using namespace std;
int main(){
int t ;
cin>>t;
while(t--){
    int n,m;
    cin>>n;
    cin>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }        
      
    }

     
    



    int b[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j+1==m){
                b[i][j]=a[i][j+1-m];            }
            else{
                b[i][j]=a[i][j+1];
            }


            
        }
    }

    if(n==1 && m==1){
        cout<<-1<<endl;
    }
    else{
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){

            // if(i==n-1 && j==m-1){
            //     // for(int j=0;j<m;j++){
            //     //     cout<<b[0][j]<<" ";
            //     // }
            //     cout<<"poop";
            // }
            // else{
            cout<<b[i][j]<<" ";
            // }
        }
        cout<<"\n";

    }

    for(int j=0;j<m;j++){
        cout<<b[0][j]<<" ";
    }
    }


}

}