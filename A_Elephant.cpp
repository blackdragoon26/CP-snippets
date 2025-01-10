#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x;

    cin>>x;

    long long a=floor(x/5);
    if(x%5){
        cout<<a+1;

    }
    else{
        cout<<a;
    }
}