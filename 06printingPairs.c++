
#include<iostream>
using namespace std;

void PrintPairs(int *arr, int n)
{
    for(int i=0; i<n;i++)
    {
        int x = arr[i];
        for(int j=i+1; j<n;j++)
        {
            int y = arr[j];
            cout<<x<<" , "<<y;
        }
        cout<<endl;
    }
}

int main()
{
    int arr[] = {2,3,4,5,6};
    int key = 6;
    int size = sizeof(arr)/sizeof(int);
    PrintPairs(arr, size);
    return 0;
}