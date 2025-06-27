#include<iostream>
using namespace std;

int main(){
    int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4;
    int dSum=0;
    //Time complexity O(n^2)
    /* for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                dSum+=mat[i][j];
            else if(j==n-i-1)
                dSum+=mat[i][j];
        }        
    } */
    //Optimized with time complexity - O(n)
    for(int i=0;i<n;i++){
        dSum+=mat[i][i];
        if(i!=n-i-1)
            dSum+=mat[i][i];
    }
    cout<<"MaximumDiagonalSum"<<dSum<<endl;
}
