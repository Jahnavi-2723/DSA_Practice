#include<iostream>
using namespace std;

int main(){
    int mat[3][3];
    int mat1[3][3] = {{0,1,0},{1,0,1},{0,0,2}};
    int row=3;
    int col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>mat[i][j];
        }
    }
    cout<<mat1[2][0]<<endl;
    //output!!!
    cout<<"matrix1"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<< "matrix2"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}