#include<bits/stdc++.h>
using namespace std;

// void print(vector<int>v){
//      for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }

int main(){
    // vector<int>v;
    // v.push_back(100);
    // v.push_back(320);
    // v.push_back(1122);
    // v.push_back(23);
    // v.push_back(111);

    // v.insert(1,66);
    // print(v);
    queue<int>q;
    q.push(1);
        q.push(2);  
          q.push(3);
              q.push(4);
for(int i=0;i<4;i++){
    cout<<q.front()<<" ";
    q.pop();
}

   
}