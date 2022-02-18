#include<bits/stdc++.h>
using namespace std;

class desc{
    public:
        int *arr;
        int n;

    public:
        void getdata(){
            cout<<"Enter size of array :"<<endl;
            cin>>n;
            cout<<"Enter array elements :"<<endl;
             int *arr=new int(n);
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }

        }
        int desort(){
            for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
          }
             }
             print();
        } 
        void print(){
            for(int i=0;i<n;i++)
                cout<<arr[i]<<endl;
        }  

};

int main(){
    desc a1;
    a1.getdata();
    a1.desort();
}