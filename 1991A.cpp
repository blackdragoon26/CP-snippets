#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        // vector<int> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        // int maxi= *max_element(a.begin(),a.end());
        
        vector<int>b;
        for(int i=0;i<n;i=i+2){
            b.push_back(a[i]);
        }


        int m= *max_element(b.begin(),b.end());
        cout<<m<<endl;


        

        
    

        }



    }
