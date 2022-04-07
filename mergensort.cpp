#include<bits/stdc++.h>
using namespace std;

void mergesort(int arr1[],int arr2[],int m,int n){
    
    int arr[m+n];
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j])
            {
                arr[k++]=arr1[i++];
                
            }
        else {
            arr[k++]=arr2[j++];
            
        }
    }

    while(i<m)
        arr[k++]=arr1[i++];

    while(j<n)
        arr[k++]=arr2[j++];

    for(int x=0;x<k;x++)
        cout<<arr[x]<<endl;

}


int main(){
    int arr1[]={10,11,12,41,45,254};
    int arr2[]={17,21,33,40,51,121};
    int m=6;
    int n=6;
    mergesort(arr1,arr2,m,n);
}