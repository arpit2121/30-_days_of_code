//brute force
#include <iostream>
#include <climits>
using namespace std;

int addingSubarrays(int *arr, int n)
{
    int maxi;
    //int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                // if (sum > max)
                // {
                //     max = sum;
                // }
                maxi = max(maxi, sum);

            }
            cout << "sum of each subarray = " << sum << endl;
        }
    }
    return maxi;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(int);
    int max = addingSubarrays(arr, size);
    cout << endl;
    cout << "sum of max subarray = " << max << endl;
    return 0;
}
