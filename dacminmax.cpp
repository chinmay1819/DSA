#include<bits/stdc++.h>
using namespace std;

void minmax(int arr[],int i,int j,int &max,int &min){

    int mid=(i+j)/2;
    if(i==j){
        if(max<arr[i])
            max=arr[i];
        if(min<arr[j])
            min=arr[j];

        return ;        
        
    }
    else if(j-i==1){
        if(arr[i]<arr[j]){
            if(min>arr[i])
                min=arr[i];
            if(max<arr[j])
                max=arr[j];    




        }
        else {
            if(min>arr[j])
                min=arr[j];
            if(max<arr[i])
                max=arr[i];    
        }

    return;
    }

    minmax(arr,i,mid,max,min);
    minmax(arr,mid+1,j,max,min);

}

int main(){
    int arr[]={10,52,11,33,6,12,1};
    int i=0,j=6;
    
    int max=INT32_MIN;
    int min=INT32_MAX;
    minmax(arr,i,j,max,min);
    cout<<"Maximum element is "<<max<<endl;
    cout<<"Minimum element is "<<min<<endl;
}