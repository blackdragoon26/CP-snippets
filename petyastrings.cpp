#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	string t;
    cin>>s;
	cin>>t;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);

    if(s>t){
        cout<<1;
    }
    else if(s<t){
        cout<<-1;
    }
    else{
        cout<<0;
    }
}