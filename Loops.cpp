#include<iostream>
using namespace std;

int main(){
    int n, i=1, sum=0;
    cout<<"Enter a number:";
    cin>>n;
    //While loop
    /* while(i<=n){
        sum+=i;
        i++;
    } */
    
    //For loop
    /* for(int j=1;j<=n;j++){
        if(j%2 != 0)        //odd sum
            sum+=j;
    } */
    //do-while loop
    
    do{
        sum+=i;
        i++;
    }while(i<=5);


    cout<<"Sum of "<<n<<" numbers is "<<sum;
    return 0;
}