#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int temp=0;
    vector<int> res(n);
    for(int i=0;i<n;i++){
        auto te=find(p.begin(),p.end(),i+1);
        res[i]=distance(p.begin(),te)+1;


    }

    for(auto o:res){
        cout<<o<<" ";
    }
    


}