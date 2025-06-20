#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={3,-4,5,4,-1,7,8};
    int cs=0,ms=INT_MIN;
    for(int i=0;i<7;i++){
        cs+=arr[i];
        ms=max(ms,cs);
        if(cs<0)        cs=0;
    }
    cout<<ms;
}