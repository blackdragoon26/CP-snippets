#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;

    cin>>n;
    int temp=0;

    for(int i=0;i<n.size();i++){
        if(n[i]=='4'){
            temp++;
        
        }
        else if(n[i]=='7'){
            temp++;
        }
    }
   
    if(temp==n.size()){
        cout<<"YES";

    }
    else{
        cout<<"NO";
    }
}