#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string a="codeforces";
        int temp=0;
        for(int i=0;i<a.size();i++){
            if(s[i]!=a[i]){
                temp++;
            }



        }
        cout<<temp<<endl;
    }
}