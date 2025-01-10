#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
       int a;
       int b;
       int c;
       int m;
       cin>>a;
       cin>>b;
       cin>>c;
       cin>>m;
       if(a==b && b==c && c==m){
           cout<<"NO"<<endl;
       }
       else if(abs(a-b)==m || abs(b-c)==m || abs(a-c)==m ||a==b||a==c||b==c  ){
           cout<<"YES"<<endl;          }
        else{
            cout<<"NO"<<endl;
        }
   }
}