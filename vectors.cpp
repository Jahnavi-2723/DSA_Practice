#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

/* int main(){
    vector<int> vec2(3,4);
    vector<int> vec1={0,1,2};
    cout<<vec2[2];
    return 0;
} */

int main(){
    
    vector<int> arr={1,2,3};
    int n= arr.size();
    int mam=-1000000;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            mam=max(sum, mam);
        }
    }
    cout<<mam;
}