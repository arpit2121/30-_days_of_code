//Efficient searching algorithm to find the index of element in a given sorted array

#include<iostream>
using namespace std;

int BinarySearch(int *arr, int n, int key)
{
    int s=0, e=n-1, mid =0;
    while(s<=e)
    {
        mid = (s+e)/2;
        if(arr[mid] == key){   
            return mid;
        }
        else if(arr[mid]>key) e = mid-1; 
        else s = mid+1;
    }
    return -1;
}
//search can monotonic = increasing or decreasing
int main()
{
    int arr[] = {2,3,4,5,6,7,8,9};
    int key = 6;
    int size = sizeof(arr)/sizeof(int);
    int index = BinarySearch(arr,size,key); 
    if(index!=-1) cout<<key<<" Element is found is at  "<<index<<endl;
    else cout<<"element is not found"<<endl;
    return 0;
}