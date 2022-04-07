#include<bits/stdc++.h>
using namespace std;
void nearestValidPoint(int x, int y, vector<vector<int>> points) {
    for(int i=0;i<points.size();i++){
        for(int j=0;j<2;j++){
            if(points[i][0]==x)
                cout<<"YES"<<endl;
        }
    }
   




}


int main(){
    vector<vector<int>>points{
        {1,2},
        {3,1},
        {2,4},
        {2,3},
        {4,4}
    };
    
    // [[1,2],[3,1],[2,4],[2,3],[4,4]]

    int x=3,y=4;
    nearestValidPoint(x,y,points);
}


void printa(vector<vector<int>>points){
     for(int i=0;i<points.size();i++){
        for(int j=0;j<2;j++){
            cout<<points[i][j]<<" ";
        }
        cout<<("\n");
    }

}