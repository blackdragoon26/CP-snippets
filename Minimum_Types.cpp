#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int c[n];
        for(int i=0;i<n;i++){
            c[i]=a[i]*b[i];
        }
        sort(c,c+n);
        reverse(c,c+n);
        int counter=0;
        for(int i=0;i<n;i++){
            if(x>0){
                x=x-c[i];
                counter++;



            }
            else{
                break;
            }
        }
        cou



    }
}