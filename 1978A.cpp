#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];


        }

        int ans= *max_element(a.begin(),a.end()-1);
        cout<<ans+a[n-1]<<endl;

        

        
            




    }


}