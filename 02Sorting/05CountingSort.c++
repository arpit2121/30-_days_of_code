#include<iostream>
#include<vector>
using namespace std;

void CountingSort(int arr[], int n)
{
    //largest element
    int largest = -1;
    for(int i=0; i<n; i++)
    {
        largest = max(largest, arr[i]);
    }
    //create a count array;
    //int *freq = new int[largest+1];
    vector<int> freq(largest+1,0);

    //update the freq array
    for(int i=0; i<n; i++)
    {
        freq[arr[i]]++;
    }

    //put back the elements from freq into original array

    int j=0;
    for(int i=0; i<=largest; i++)
    {
        while(freq[i]>0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
    return;
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


    CountingSort(arr,n);

    for(int x : arr)
    {
        cout<<x<<" ";
    }
    return 0;
}