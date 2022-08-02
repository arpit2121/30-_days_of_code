
#include<iostream>
using namespace std;

void reverse_array(int *arr, int n)
{
    int s=0, e=n-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s+=1;
        e-=1;
    }
}
//search can monotonic = increasing or decreasing
int main()
{
    int arr[] = {2,3,4,5,6};
    int key = 6;
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<size; i++)
    cout<<"before  swapping ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";   
    }
      cout<<endl;

    reverse_array(arr,size);
    cout<<"after swapping ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";   
    }
      cout<<endl;
    return 0;
}