#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int a,b,c,d;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        int temp=0;
        if(b>a){
            temp++;

        }
        if(c>a){
            temp++;
        }
        if(d>a){
            temp++;
        }
        cout<<temp<<"\n";
    }

}