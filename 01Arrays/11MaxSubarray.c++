
#include<iostream>
#include<vector>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int cs = 0, max = 0;
    for(int i=0; i<A.size(); i++)
    {
        cs = cs + A[i];
       if(cs<0) cs =0;
       else
       {
           if(cs>max)
           {
               max = cs;
           }
       }
       
}
return max;
}

int main()
{
    vector<int> arr {-1,-2,3,4,4,-2};
    int a = maxSumSubarray(arr);
    cout<<a<<endl;
    return 0;
}