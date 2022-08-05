#include<iostream>
using namespace std;

void print(int arr[][100], int n, int m)//passing the rows in optional but passing columns is mandatory in 2d arrays
{
    //print
    for(int i=0 ; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
}

int main()
{
    //constraints
    int arr[1000][100];
    //n rows and m columns
    int n, m;
    cin>>n>>m;

    //take input
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    print(arr, n, m);
    return 0;
}