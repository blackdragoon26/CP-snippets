#include<bits/stdc++.h>


int main(){
    int n;
    std::cin>>n;
    std::string s;
    std::cin>>s;
    int temp=0;

    for(int i=0;i<size(s)-1;i++){
        if(s[i]==s[i+1]){
            temp++;

        }

    }
    std::cout<<temp;


}