#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }


        int temp=INT_MAX;
        int flag=0;

        for(int i=0;i<n;i++){
            if(a[i]>=k){
                temp=min(a[i]%k,temp);
                
                flag=1;
            }
            
        }
        if (flag==0) cout<<-1<<endl;
        else cout<<temp<<endl;
    }
}