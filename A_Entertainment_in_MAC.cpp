#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string rev=s;
      
        reverse(rev.begin(), rev.end()); 
        if(s<rev || s==rev){
            cout<<s<<"\n";
        
        }
        else{
            cout<<rev+s<<"\n";

        }
    }
}