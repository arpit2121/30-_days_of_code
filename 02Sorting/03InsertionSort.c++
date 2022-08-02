#include<iostream>
using namespace std;
//sort the element in increasing order
void SelectionSort(int arr[], int n)
{
    for(int pos = 0; pos<=n-2; pos++)
    {
        int current = arr[pos];
        int min_positon = pos;

        //find out the element
        for(int j=pos; j<n; j++)
        {
            if(arr[j]<arr[min_positon])
            {
                min_positon = j;
            }
        }
        //swap outide the loop
        swap(arr[min_positon], arr[pos]);
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
    SelectionSort(arr,n);

    for(int x : arr)
    {
        cout<<x<<" ";
    }
    return 0;
}
