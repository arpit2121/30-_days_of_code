#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Demo Vector
    vector<int> arr = {1,2,3,4,5}; 
    //push_back O(1)
    arr.push_back(15);


     // size is 0;
    cout<<arr.size();//for finding the size of array(size will tell us the no of elements are present in array)
    cout<<arr.capacity();//capacity will tell us that how many element can we enterwhen we do initialization the capacity would be reamin same  
    // whenn we increasd the size in vecotr it increase the size by 2n

    // print all the elements;
    for(int i=0; i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }

    // pop_back()  use for removing the eement
    arr.pop_back(); 

    // insert use for inserting value at middle of a vector


    // erase use for removing particular element from vector

    // fill counstructor use for creating a vector which initailsze with particular value
    vector<int> arr(10,7);// it will print 10 elemnts with same 7

    //fill contructor
    vector<int> visited(100,0);

    return 0;
}