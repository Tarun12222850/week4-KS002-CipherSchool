// Lecture 24 - Recursion

#include <iostream>
using namespace std;

int fibonacci(int input){
    if(input==0 || input==1){
        return 1;
    }
    int fib;
    fib = fibonacci(input-1) + fibonacci(input-2);
    return fib;
}

int main(){
    int input;
    cout << "Enter the number you wan to find the fibonacci series : ";
    cin >> input;

    cout << fibonacci(input);
    return 0;
}