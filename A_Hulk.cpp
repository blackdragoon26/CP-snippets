#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"I hate it";
    }
    else if(n==2){
        cout<<"I hate that I love it";
    }
    else if(n%2!=0){
        string s;
        for(int i=1;i<=n-1;i++){
            if(i%2!=0){
                s+="I hate ";
            }  
            else if(i%2==0){
                s+="I love ";
            }                           //ihatethatilove    thatihateit
            


        }

    }
    elseif
}