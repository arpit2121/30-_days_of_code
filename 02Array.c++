// Passing Array in function
#include<iostream>
using namespace std;

void printArray(int *arr , int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"in func = "<<arr[i]<<endl;
    }
}

int main()
{
    int arr[] = {2,4,6,8,9,3};
    int size = sizeof(arr)/sizeof(int);//caluclating the size of array
    for(int i = 0; i<size; i++)
    {
        cout<<"In main Method = "<<arr[i]<<endl;
    }

    printArray(arr, size);
    return 0;
}