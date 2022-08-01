//Searching algorithm to find the index of element in given array.it is a brute force techinique

// Passing Array in function
#include<iostream>
using namespace std;

int LinearSearch(int *arr, int n, int key)
{
    for(int i=0; i<n;i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}

int main()
{
    int arr[] = {2,4,6,8,9,3};
    int key  = 6;
    int size = sizeof(arr)/sizeof(int);//caluclating the size of array
    int index = LinearSearch(arr, size, key);
    if(index!=-1)
    {
        cout<<key<<" Your element is present in the list at index "<<index;
    }
    else{
        cout<<key<<" your element is no tpresent in the list";
    }
    return 0;
}