//Suraj Subramanian 
//maximum element in an array
#include<iostream>
using namespace std;

int main(){
    int arr[10];   
    int max=arr[0];
    for(int i=0;i<10;i++){
        cin>>arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<max<<endl;
    return 0;
}