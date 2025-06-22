#include<iostream>
#include<vector>
using namespace std;

int Bin_sea(int a[], int tar, int st, int end){
    while(st<=end){
        int mid=st+(end-st)/2;
        if(tar==a[mid])  return mid;
        else if(tar>a[mid])    return Bin_sea(a,tar,mid+1,end);
        else                   return Bin_sea(a,tar,st,mid-1);
    }
    return -1;
}
int main(){
    int arr[]={2,5,78,456};
    int tar=78;
    cout<<Bin_sea(arr,tar,0,3)<<endl;
    return 0;    
}