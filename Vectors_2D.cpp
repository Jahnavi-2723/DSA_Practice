#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> v={{1,3},{2,4},{6,7,8,9}};
    int row=v.size();
    int col=v[0].size(); //each column size is length of row
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}