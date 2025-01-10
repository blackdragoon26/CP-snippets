#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    vector<int> n;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'|s[i]=='2'|s[i]=='3'){
            int num=(s[i])-'0';
            n.push_back(num);

        }
    }
    sort(n.begin(),n.end());
    for(int i=0;i<n.size();i++){
        cout<<n[i];
        if(i==n.size()-1){

        }
        else{
        cout<<"+";}

    }


    
}