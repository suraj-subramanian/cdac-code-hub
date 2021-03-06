/*
    Suraj Subramanian
    Program to implement Quick Sort Algorithm
*/

#include <iostream>
using namespace std;
#define SIZE 10

void quick_sort(int[], int, int);
int partition(int[], int, int);
void swap(int &, int &);

int main()
{
    int arr[SIZE] = {45, 10, 78, 69, 420, 14, 93, 11, 80, 5};
    quick_sort(arr, 0, SIZE - 1);

    for(int i=0; i<SIZE; i++)
        cout<<arr[i]<<" ";
        
    cout<<endl;
}

void quick_sort(int arr[], int start, int end)
{
    if (start < end)
    {
        int partition_index = partition(arr, start, end);

        quick_sort(arr, start, partition_index - 1);
        quick_sort(arr, partition_index + 1, end);
    }
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];       // Setting last element in sub-array as the pivot

    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}