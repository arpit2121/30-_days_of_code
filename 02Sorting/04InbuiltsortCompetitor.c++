#include<iostream>
#include<algorithm>
using namespace std;


// we can also use the comparitor for reversing
bool compare(int a, int b)
{
    //cout<<"comparing"<<a<<" "<<b;
    return a>b;//for descending
    return a<b; //for asending

}


int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    //sort(arr,arr+n);

    sort(arr,arr+n, compare);
    //we are passing function inside the function the that compare fun control the 
    //inbuilt comparitor sort(arr, arr+n, greater<int>());
    //2 for reversing also we use the reverse(arr,arr+n);

    //print
    for(int x : arr) cout<<x<<" ";
    cout<<endl;

    return 0;
}
