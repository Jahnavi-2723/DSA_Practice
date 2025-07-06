#include<iostream>
#include<vector>
using namespace std;

void printS(vector<int> arr, vector<int>& ans, int i){
    if(i==arr.size()){
        for(int j:ans)
            cout<<j<<" ";
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);
    printS(arr,ans,i+1);
    ans.pop_back(); //Backtracking step
    printS(arr,ans,i+1);
}

int main(){
    vector<int> arr={1,2,3};
    vector<int> ans;
    printS(arr,ans,0);
    return 0;
}