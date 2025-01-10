#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b[n-1];
        int a[n];

        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        a[0]=b[0];
        a[n]=b[n-1];

        for(int i=1;i<n-1;i++ ){
            a[i]=b[i]|b[i-1];

        }
        int flag =0;

        for(int i=0;i<n;i++){
            if(a[i]&& a[i+1]==b[i]){
                flag++;
            }
            else{
                cout<<-1<<endl;
                break;
            }
        }

        if(flag==n){
            for(int i=0;i<n;i++){
            cout<<a[i];
        }
        cout<<endl;
    
            
        }
        else{
            cout<<-1<<endl;
        }




        
        
        



    }



    return 0;
}