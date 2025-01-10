#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int a;
        int b;
        cin>>n;
        cin>>a;
        cin>>b;
        if(a<=b/2){
            cout<<n*a<<endl;
        }
        else{



        if(n%2==0){
    
            cout<<(n/2)*(b)<<endl;
        }
        else{
            cout<< (((n-1)/2)*(b))+a<<endl;
        }
        }

    }
}