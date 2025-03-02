#include<bits/stdc++.h>
using namespace std;
 bool isSquare(long long n){
    long long x = sqrt(n);
    return x*x == n;
 }
int main(){
    int t;
    cin>>t;
    while(t--){
       long long n;
       cin>>n;
       if(isSquare(n*(n+1)/2 )){
        cout<<-1<<endl;
       }
       else{

        vector<long long> v(n+1);
        for(int i=1;i<=n;i++){
            v[i] = i;
        }
        for(int i=n-1;i>0;i--){
            if(isSquare(v[i]*v[i+1]/2)){
                swap(v[i],v[i+1]);
            }
        }
        for(int i=1;i<=n;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
       }


    
    
    }
}