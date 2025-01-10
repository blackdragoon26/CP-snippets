#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int s[16];
	    for(int i=1;i<=16;i++){
	        cin>>s[i];
	    }
	    
	    vector<int> count;
	    for(int i=1;i<=16;i++){
            int point=0;
	        
	        for(int j=1;j<=16;j++){
	            
	            if(s[i]>s[j]){
                    point++;
	                
	            }

	        }
            count.emplace_back(point);
            // count.push_back(point);
	        
	    }
        int max= *max_element(count.begin(),count.end());

        for(int i=1;i<=16;i++){
            if(count[i]==max){
                count[i]=4;

            }

            else if(count[i]==0){
            

        }






        for(auto i:count){
            cout<<i<<" ";
        }
        cout<<endl;
	    





	}

}
