#include<bits/stdc++.h>
using namespace std;




int binarySearch(int question[], int low, int high, int a){
    
    while(low<= high){

        int mid= low + (high - low)/2;

        if( question[mid]==a){
            return mid;
        }

        else if(question[mid]<a){
            low=mid +1;
        }
        else{
            high=mid-1;

        } 

        


    }
      

}

int main(){
    //binary search 
    //to find elment , a from the array "question"

    int question[]= {1,2,3,4,5,6,7,8,9,10};
    int a;
    cout<<"Which number to check from Question array?";
    cin>>a;


    int m=sizeof(question)/sizeof(question[0]);

    int result= binarySearch(question,0,m-1,a);

    if(result==-1) cout<<"Absent";
    else cout<<"Present"+result;
    

}