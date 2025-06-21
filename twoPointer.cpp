#include<iostream>
using namespace std;

// Reverse of arrays using 2 pointers
int main(){
    int n;
    cout<<"length of string";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)     cin>>arr[i];
    int left=0, right=n-1;
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    cout<<"reserve array"<<endl;
    for(int i=0;i<n;i++)      cout<<arr[i]<<endl;
    return 0;

}