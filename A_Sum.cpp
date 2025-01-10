#include<bits/stdc++.h>
using namespace std;
// #define int long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;

        if(a+b==c || b+c==a|| a+c==b){
            cout<<"YES\n";

        }   
        else{
            cout<<"NO\n";
        } }
}