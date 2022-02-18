#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={20,50,3,55,21,65};
    arr[-1]=121;
    for(int i =-1; i<=6;i++){
        cout<<i<<"  "<<arr[i]<<endl;
    }
}