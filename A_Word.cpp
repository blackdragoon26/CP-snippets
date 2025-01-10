#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    int bade=0;
    int chhote=0;
    for(int i=0;i<size(s);i++){
        if(islower(s[i])){
            chhote++;
        }
        else{
            bade++;
        }
    }
    if(chhote>=bade){
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        cout<<s<<endl;

    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::toupper); 
        cout<<s<<endl;

    }





}