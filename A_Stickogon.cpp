// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> a(n);
//         set<int> nd;
//         // list<int> ap;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             nd.insert(a[i]);
//             // ap.push_front(a[i]);
//         }  
//         int temp=0;
        

//         for(auto j:nd){
//             count(a.begin(),a.end(),j);
//             if (j>2){
//                 temp++;
//             }

        
            
//         }
//         cout<<temp<<"\n";

       
    



//     }
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
  
        set<int> ap;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ap.insert(a[i]);       
        }  

        int temp=0;       

        for(auto c:ap){
            count(a.begin(),a.end(),c);
            if (c>2){
                temp++;
            }        
            
        }
        cout<<temp<<"\n";

       
    



    }
}