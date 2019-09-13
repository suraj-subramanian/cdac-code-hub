//Suraj Subramanian
//Factorial of a number using recursion
#include<iostream>
using namespace std;

long int factorial(long int);

int main(){
    long int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}

long int factorial(long int n){
    if(n==0)
        return 1;
    return n*factorial(n-1);  
}