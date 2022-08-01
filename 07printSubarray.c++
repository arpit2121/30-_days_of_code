
#include<iostream>
using namespace std;

void printingSubarray(int *arr, int n)
{
    for(int i=0; i<n;i++)
    {
        for(int j=i; j<n;j++)
        {
            for(int k=i;k<=j;k++)
            cout<<arr[k]<<",";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[] = {2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    printingSubarray(arr, size);
    return 0;
}

//print the sum of all subarrays and print the largest

