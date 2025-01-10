#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;


    while(t--){
        int n;
        int k;
        cin>>n;
        cin>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int l;
        int r;
        int count;
        vector<int> b;

        while(count>k|| n>k){
        for(int i=0;i<n;i++){
            l=i;
            r=0;
            if(r-l+1==k){
                goto label1;

            }
        }
        label1:
        int count=0;
        
        for(int i=0;i<l;i++){
            b.push_back(a[i]);
            count++;

        }
        for(int i=r+1;i<n;i++){
          
            b.push_back(a[i]);
            count++;
        }
        }


        sort(b.begin(),b.end());
        cout<<b[(count+1)/2]<<"\n";

    }
}