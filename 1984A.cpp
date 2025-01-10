#include <bits/stdc++.h>
using namespace std;
int main()
{

    int k;
    cin >> k;
    while (k--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

    
        string s[n];

        if((a[n-1]-a[1])!=(a[0]-a[0])){
            s[0]="R";
            for(int i=1;i<n;i++){
                s[i]="B";
            }
            cout<<"YES"<<"\n";
            for(int i=0;i<n;i++){
                cout<<s[i];} cout<<"\n";
        }
        else if((a[n-1]-a[n-1])!=(a[n-2]-a[0])){
            s[n-1]="R";
            for(int i=0;i<n-1;i++){
                s[i]="B";
            }
            cout<<"YES"<<"\n";
            for(int i=0;i<n;i++){
                cout<<s[i];} cout<<"\n";
        }

        

        else{
            cout<<"NO"<<"\n";
        }
   
       
    }
}