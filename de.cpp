#include<bits/stdc++.h>
using namespace std;



class desc{
    public:
    int arr[20];
    int n;
    int high=n-1;
    int low = 0;



    public: 
    void getarr(){
        
    cout<<"Enter n"<<endl;
    cin>>n;

    
    cout<<"Enter elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   

    }

    void reversesort(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1])
                swap(arr[j],arr[j+1]);
      }
    }
}

void print(){
    cout<<"Sorted Array :"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    
}





};

int main(){
    desc a1;
    a1.getarr();
    a1.reversesort();
    a1.print();
    
}