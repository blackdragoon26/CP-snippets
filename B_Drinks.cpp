#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p[n];
    long double sum=0;
    for(int i=0;i<n;i++){
        cin>>p[i];
        sum+=p[i];

    }

    cout<<fixed<<setprecision(12)<<sum/n;
}