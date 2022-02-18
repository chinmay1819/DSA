#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
        int *data;
        int nextIndex;
        int capacity;


    public:
        Stack(){
            data=new int[10];
            nextIndex=0;
            capacity=10;
        }

        int size(){
            return nextIndex;
        }

        bool isEmpty(){
            
        }



};

