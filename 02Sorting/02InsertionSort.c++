#include<iostream>
using namespace std;
//sort the element in increasing order
void InsertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int current = arr[i];

        int prev = i-1;
        //to find the right index where the element current should be inserted
        while(prev>=0 and arr[prev]>current)
        {
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev+1] = current;
    }
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    InsertionSort(arr,n);

    for(int x : arr)
    {
        cout<<x<<" ";
    }
    return 0;
}
