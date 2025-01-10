#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> f;
        int samp;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                samp=2*(i+j);

                f.push_back(abs(samp-k));
                
               

            }
        }
        sort(f.begin(),f.end());
        cout<<f[0]<<endl;
    }

}