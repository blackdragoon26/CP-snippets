#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int input;
        set<int> x;
        for(int i=0;i<n;i++){
            cin>>input;
            x.insert(input);
        }
        int flag=0;

        auto prev = x.begin();
        auto curr = ++x.begin(); 

        while (curr != x.end()) {
            if (abs(*curr - *prev) == 1) { 
                cout << "NO" << endl;
                flag = 1;
                break;
            }
            prev = curr;
            ++curr;
        }

        if(flag==0){
            cout<<"YES"<<endl;
        }

        
    }
}