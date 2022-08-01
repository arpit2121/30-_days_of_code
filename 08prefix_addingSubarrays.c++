//prefix approach O(n^2)

//brute force
#include <iostream>
#include <climits>
using namespace std;

int PrefixSubarrays(int arr[], int n)
{
    //prefix sums
    int prefix[100]={0};
    prefix[0]=arr[0];

    for(int i=0; i<n; i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }

    //largest summ logic

    int lasrgest_sum = 0;
    for(int i=0; i<n;i++)
    {
        for(int j=i; j<n;j++)
        {
            int subarraysum = i>0 ? prefix[i-1] : prefix[j];
            //put a check is subarraySum > largest_sum
            lasrgest_sum = max(lasrgest_sum, subarraysum);
        }
    }
    return lasrgest_sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(int);
    int max = PrefixSubarrays(arr, size);
    cout << endl;
    cout << "sum of max subarray = " << max << endl;
    return 0;
}
