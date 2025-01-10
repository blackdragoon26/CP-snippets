#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }


        int mx=0;

        int j;
        int count=0;
        int temp;
        
     

        for(int i=0;i<n;i++){
            temp=a[0];
            
            for(int k=1;k<n;k++){
                if(a[k]>a[k-1]) {

                    temp=a[k];
                    j=k;
                }
            }
          
            if(temp>=mx){
                //good
                mx=a[j];
                a[j]=0;
                count++;
            }  
            else{break;
            }       


        }
        if(count%2!=0){
            cout<<"yes"<<endl;
        }
        else{cout<<"no"<<endl;}
        

    }
}

