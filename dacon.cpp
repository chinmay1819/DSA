#include<bits/stdc++.h>
using namespace std;
void min_max(int arr[],int l,int h,int &min,int &max)
{
int max1=INT_MIN,min1=INT_MAX;
if(l==h) {
    min=arr[l];
    max=arr[l];
    return;
}

if(l==h-1){
        if(arr[l]<arr[h]){
            max=arr[h];
            min=arr[l];
        }
        else{
            max=arr[l];
            min=arr[h];
        }
        return;
}

    int mid=(l+h)/2;
    min_max(arr,l,mid,min,max);
    min_max(arr,mid+1,h,min1,max1);
    if(max<max1){
        max=max1;
    }
    if(min>min1){
        min=min1;
    }



}
int main(){
    int arr[5]={1,2,3,4,5};
    int max=INT_MIN,min=INT_MAX;
    min_max(arr,0,4,min,max);
    cout<<min<<" "<<max<<endl;


} 