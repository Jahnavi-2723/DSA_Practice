#include<iostream>
using namespace std;

void fib(int n) {
    int a1 = 0;
    int a2 = 1;

    if (n <= 0) {
        cout << "Please enter a positive integer for the nth element." << endl;
        return;
    } else if (n == 1) {
        cout << a1 << endl;
        return;
    } else if (n == 2) {
        cout << a1 << " " << a2 << endl;
        return;
    }
    cout << a1 << " " << a2;

    for (int i = 3; i <= n; i++) { // Start loop from the 3rd term
        int a3 = a1 + a2;
        cout << " " << a3;
        a1 = a2;
        a2 = a3;
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter the number of elements to print in the Fibonacci series: ";
    cin >> num;
    fib(num);
    return 0;
}