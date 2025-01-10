// #include<bits/stdc++.h>
// using namespace std;
//     string s;

// int main(){
//     cin>>s;
//     int fag=9;
//     for(int i=0;i<sizeof(s);i++){
//         if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0'&& s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0'){
//             fag=5;
//             break;

//         }
//         else if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1'&& s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1'){
//             fag=5;
//             break;
//         }
//         else{
//             fag=6;
//         }

//     }
//     if(fag==6){
//         cout<<"NO";
//     }
//     else if(fag==5){
//         cout<<"YES";
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    if (s.find("0000000")!= string::npos)
    {
        cout << "YES";
    }
    else if (s.find("1111111") != string:: npos)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}