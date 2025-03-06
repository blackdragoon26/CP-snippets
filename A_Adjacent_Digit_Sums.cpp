#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x,y; 
        cin>>x>>y;
        vector<int>a(111);
        for(int i=0;i<111;i++){
                a[i]=9*i+8;
        }
        // vector<int> a={8,17,26,35,44,53,62,71,80,89,98,107};

        if(x==y){
            cout<<"No"<<endl;
        }
        else if(y-x==1  ){
            cout<<"Yes"<<endl;
        }
        else if(find(a.begin(),a.end(),x-y)!=a.end()){
            cout<<"Yes"<<endl;

        }
        else if(y==1 && x%9==0 ){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
}