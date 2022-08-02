
#include<iostream>
#include<vector>
using namespace std;

int LowerBound(vector<int> A, int val) {
    if(val<A[0]) return -1;
    else{
        for(int i=0; i<A.size(); i++)
        {
            if(val==A[i]) return val;
            else if(val>A[i]) return A[i-1];
        }
    }
}

int main()
{
    vector<int> arr {-1,-2,3,4,4,-2};
    int val = 4;
        int a = LowerBound(arr, val);
        cout<<a<<endl;
    return 0;
}