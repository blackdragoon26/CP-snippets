#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string st[n];
    for(int i=0;i<n;i++){

        cin>>st[i];
        
    }

    int x=0;
    for(int i=0;i<n;i++){
        string temp=st[i];
        for(int j=0;j<temp.length();j++){
            if(temp[j]=='+'){
                x++;
                break;

            }
            else if(temp[j]=='-'){
                x--;
                break;
            }

        }
    }
    cout<<x<<"\n";



}