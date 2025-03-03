#include<bits/stdc++.h>
using namespace std;
bool odd(int n){
    return n%2==0;
}
int main(){
    int n;
    cin>>n;
    string h="I hate";
    string l="I love";
    string y=" it";
    string z=" that ";
    string ans="";
    for(int i=0;i<n;i++){
        if(odd(i)){
            ans+=h;


        }
        else{
            ans+=l;
        }

        if(i==n-1){
            ans+=y;

        }
        else{
            ans+=z;
        }
    }
    cout<<ans;
}