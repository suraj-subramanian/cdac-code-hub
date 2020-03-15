// Suraj Subramanian
// Program to find the missing number in an array.
// The array can contain numbers from 1 to n, one number is missing hence array has n-1 elements, the array is unsorted.

// Time Complexity : O(n)

#include <iostream>
using namespace std;

#define SIZE 10 //Assuming n to be 10

int main() {
    int arr[SIZE - 1] = {5, 8, 3, 1, 9, 4, 6, 7, 10};   // 2 is missing
    int expected_sum = (SIZE * (SIZE + 1))/2;           // (n*(n+1))/2 sum of 1 to n
    int arr_sum = 0;

    for(int i = 0; i < SIZE - 1; i++)
        arr_sum = arr_sum + arr[i];                     // sum of all elements in array                    
    
    cout<<"Missing number = "<<expected_sum - arr_sum <<endl;   // difference in sum is the missing number
    return 0;
}
