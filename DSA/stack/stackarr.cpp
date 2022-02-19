#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int arr[20];
    int top=-1;
    int capacity=20;

public:
 bool isEmpty(){
    if(top==-1)
        return true;
    else 
        return false;
 }

 bool isFull(){
     if(top==capacity-1)
        return true;
     else
        return false;   
 }

void push(int val){
    if(isFull())
        cout<<"Stack Overflow"<<endl;
    else
        top+=1;
        arr[top]=val;    
}
void pop(){
    if(isEmpty())
        cout<<"Stack Underflow"<<endl;
    else
        top--;
        
}

int topstack(){
    if(isEmpty()){
        cout<<"Stack Underflow"<<endl;
        return -1111;
    }
  return arr[top];    
}


};

int main(){
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    cout<<s1.topstack()<<endl;
    s1.push(60);
    cout<<s1.topstack()<<endl;
    s1.pop();
    
}