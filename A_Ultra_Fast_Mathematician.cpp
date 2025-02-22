#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    string ans ="";

    for(int i=0;i<a.length();i++){
        ans+=((int(a[i]))^(int(b[i])))+'0';

    }
    cout<<ans;

   

}