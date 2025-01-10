#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int h;
    cin>>n;
    cin>>h;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp=0;

    for(int i=0;i<n;i++){
        if(a[i]>h){
            temp+=2;

        }
        else{
            temp+=1;
        }
    }
    cout<<temp<<"\n";
}