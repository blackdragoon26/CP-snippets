#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_set<int> a(n);
        
        unordered_set<int> b(n);
        int temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            
            a.insert(temp);
        }
        for(int i=0;i<n;i++){
            cin>>temp;
            b.insert(temp);
        }


        if((a.size()>=3 && b.size()>=1) || (b.size()>=3 && a.size()>=1)){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
      



        
        // unordered_map<int,int>c;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         c[a[i]+b[j]]++;
        //     }
        // }

        // bool found=any_of(c.begin(),c.end(),[](const pair<int,int>&p){
        //     return p.second>=3;
        // });

        // cout<<(found? "YES": "NO")<<endl;
     
        }

    }