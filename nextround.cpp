#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int temp=0;
    for(int i=0;i<n;i++){
        if(a[i]>=a[k-1] && a[i]>0){
            temp++;
        }
    }

    cout<<temp<<"\n";

    


}