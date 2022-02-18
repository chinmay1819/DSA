#include<bits/stdc++.h>
using namespace std;


int is_prime(int i,int k){
    
   
    for(int j=2;j<=sqrt(i);j++){
        if(i%j==0){
             k=0;
           
        }    

    }
    return k;
    

}




int main(){
    int n;
    cout<<"Enter the endpoint of interval "<<endl;
    cin>>n; 
    int count=0;
    int k;
    for(int i=2;i<=n;i++){
        k=1;
        
        if(is_prime(i,k)==1)
            count++;

    }
   cout<<"No of prime numbers : "<<endl;
   cout<<count<<endl;

    }

