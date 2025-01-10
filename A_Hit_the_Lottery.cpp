#include<bits/stdc++.h>
using namespace std;
int main(){
  
    long long n;
    cin>>n;
    long long count=0;



    if( n>=100){
        count+=n/100;//1
        n=n%100; //25
        

    }
    if(n>=20){
        count+=n/20; //1+1=2
        n=n%20; // 5

    }
    if(n>=10){
        count+=n/10; //
        n=n%10;
    }
    if(n>=5){
        count+=n/5;   //3
        n=n%5;  //0
    }

    count+=n;

    cout<<count<<endl;

    
}