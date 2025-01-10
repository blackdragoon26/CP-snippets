#include<bits/stdc++.h>

int main(){


            int t;
            std::cin>>t;
            while(t--){


                int n;
                std::cin>>n;
                // std::string s="AB";
                std::string maker;
                
                

                if(n<=1 || n%2!=0){
                    std::cout<<"no";

                }
                else{
                    std::cout<<"yes\n";

                    for(int i=0;i<n;i++){

                        if(i%2==0){
                        maker+='A';
                        maker+='A';
                        n--;
                        }
                        else{
                            maker+='B';
                            maker+='B';
                            n--;
                        }

                    }
                }

                std::cout<<maker<<"\n";


                }
}