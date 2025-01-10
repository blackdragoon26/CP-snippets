#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
	// Write your code here.
    int digtcont=0;
    	
	int dup=n;
    int dup2=n;
    while(dup>0){
        digtcont++;
        dup=dup/10;
    }
	int a[digtcont];
	for(int i=0;i<digtcont;i++){
		a[i]=n%10;
		n=n/10;
        
	}
    
    int counter=0;
	for(int i=0;i<digtcont;i++){
		if (a[i]==0){
			continue;
		}
        else if(dup2%a[i]==0){
            counter++;
        }
    }
    return counter;
}

int main(){
    int n;

    cin>>n;
    int ans=countDigits(n);
    cout<<ans;

}