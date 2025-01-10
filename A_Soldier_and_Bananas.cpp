#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    int a[w];
    cin>>k;
    cin>>n;
    cin>>w;
    int temp=0;
    for(int i=1;i<=w;i++){
        temp+=i*k;

    }
    if(temp<n){
        cout<<0;
    }
    else{
    cout<<abs(n-temp);}
}