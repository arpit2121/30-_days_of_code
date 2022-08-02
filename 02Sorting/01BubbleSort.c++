#include<iostream>
using namespace std;
//sort the element in increasing order
bool compare(int a, int b)
{
    return a>b;
}

void BubbleSort(int arr[], int n)
{
    for(int times = 1 ; times<=n-1; times++)
    {
        for(int j=0; j<=n-times-1; j++)
        {
            if(arr[j]>arr[j+1])// if(compare(arr[j], arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
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
    BubbleSort(arr,n);

    for(int x : arr)
    {
        cout<<x<<" ";
    }
    return 0;
}




//optimized approach ofr bubble sort if array will sort then inbest case it times compleaxity will be o(n) else o(n^2)

#include<iostream>
using namespace std;

void BubbleSort(int *array, int n)
{
    for(int i=0; i<n; i++)
    {
      bool flag = false;
       for(int j=0; j<n-i-1; j++)
       {
          if(array[j]>array[j+1])
          {
            flag = true;
             int temp = array[j+1];
             array[j+1] = array[j];
             array[j] = temp;
          }
       }
      // No Swapping happened, array is sorted
      if(!flag){
         return;
      }
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
    BubbleSort(arr,n);

    for(int x : arr)
    {
        cout<<x<<" ";
    }
    return 0;
}