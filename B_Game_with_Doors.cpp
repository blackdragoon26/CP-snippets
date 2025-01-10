// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int l,r;
//         cin>>l;
//         cin>>r;
//         int L,R;
//         cin>>L;
//         cin>>R;
//         vector<int> doors={0};
//         for(int i=l;i<=r;i++){
//             doors[i]=+1;

//         }
//         for(int j=L;j<=R;j++){
//             doors[j]=+1;
//         }

//         int mini=min(l,min(r,min(L,R)));
//         int maxi=max(l,max(r,max(L,R)));


//         // int maxi=*max_element(doors.begin(),doors.end());
//         // int mini=*min_element(doors.begin(),doors.end());

//         int flag=0;
//         for(int i=mini;i<=maxi;i++){
//             if(doors[i]==0){
//                 cout<<1<<endl;
//             }
//             else if(doors[i]==2){
//                 flag++;
//             }
           
//         }

//         if(flag==maxi-mini){
//             cout<<abs(l-r)<<endl;
//         }

//         else if(flag<maxi-mini){
//             if(l==L || r==R){
//                 cout<<abs(l-r+1)<<endl;
//             }
//             else{
//                 cout<<abs(l-r+2 )<<endl;
                
//             }



            
//         }


//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int l, r, L, R;
        cin >> l >> r >> L >> R;
        
        if (l != L && r != R) {
            // The two segments do not overlap, so we need to lock one door between them.
            cout << 1 << endl;
        } else {
            // The two segments overlap, so we need to lock the minimum number of doors
            // such that Alice and Bob cannot meet.

            if(r==R || L==l){cout<<min(r, R) - max(l, L)<<endl;}
            else{cout << min(r, R) - max(l, L) + 1 << endl;}
        }
    }
    
    return 0;
}
