//T = O(n)  space =O(1)
//Applications
// There are many applications of kadane’s algorithm and some of them are as mentioned below:

// Finding maximum subarray sum for a given array of integer
// Used as an image processing algorithm
// It can be used to solve the problems like “Station Travel in Order” and “Hotels Along the Coast”
// It is used for business analysis


 

// In this article, we will study what is kadane’s algorithm and its problem-solving property to solve the “Maximum Subarray Sum” problem. We will go through the algorithm and python code for the same along with the example and its corresponding output. Lastly, we will study the time complexity of the algorithm and the real-life application of kadane’s algorithm. So, let’s get started!

// What is Kadane’s Algorithm?
// Kadane’s algorithm is one of the famous approaches to solve the problem using dynamic programming. As we all know, the maximum subarray problem is one of the famous problems in the field of dynamic programming. You must be thinking that the problem seems to be easy and the result of the problem will be the sum of all elements in an array. But this is not correct. There will be negative integer elements in the array that can decrease the sum of the entire array. Therefore, to solve this problem, we will use the kadane’s algorithm.

// Here the algorithm will find the continuous subarray in the 1D integer array which has the largest sum possible. The first approach for everyone after understanding the problem statement will be applying the brute-force approach and solving the problem. But by doing so, the time complexity of the solution will be O(n2) which is not very good. Therefore, we will apply the kadane’s algorithm which solves the problem by traversing over the whole array using two variables to track the sum so far and maximum total. The most important thing to pay attention to while using this algorithm is the condition using which we will update both variables.
#include <iostream>
#include <climits>
using namespace std;

int kedansalgo(int arr[], int n)
{
   int currsum = 0;
   int largest = 0;
   for(int i=0;i<n;i++)
   {
        currsum = currsum + arr[i];
        if(currsum<0) currsum=0;
        else{
            if(currsum>largest)
        {
            largest = currsum;
        }
        }
        
   }
   return largest;
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int size = sizeof(arr) / sizeof(int);
    int max = kedansalgo(arr, size);
    cout << endl;
    cout << "sum of max subarray = " << max << endl;
    return 0;
}
