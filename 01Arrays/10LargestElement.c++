#include<iostream>
#include<vector>
using namespace std;

int LargestElement(vector<int> arr)
{
    int n = arr.size();
    int max = 0;
    for(int i=0; i<n; i++)
    {
        if(max<arr[i]) max = arr[i];
    }
    return max;
}

int main()
{
    vector<int> arr = {-3,4,1,2,3};
    vector<int> arr1 = {-1,-2,-3,-3,8};
    int a = LargestElement(arr);
    int b = LargestElement(arr1);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}