#include<iostream>
using namespace std;

int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3, col=3;
    int mini=INT_MIN, rSum=0;
    for(int i=0;i<row;i++){
        rSum=0;
        for(int j=0;j<col;j++){
            rSum+=mat[i][j];
        }
        rSum=max(rSum,mini);
        
    }
    cout<<"MaximumRowSum"<<rSum<<endl;

    int cSum=0;
    for(int i=0;i<col;i++){
        cSum=0;
        for(int j=0;j<row;j++){
            cSum+=mat[j][i];
        }
        cSum=max(cSum,mini);
        
    }
    cout<<"MaximumColumnSum"<<cSum<<endl;
    return 0;
}