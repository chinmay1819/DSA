#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}


void bubblesort(int arr[],int n){

    for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n-1;j++){
        if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
    }
}
cout<<"After implementing Bubble sort "<<endl;
print(arr,n);

}




int main(){
    int n=5;
    int arr[]={20,45,10,3,100};
    bubblesort(arr,n);
}