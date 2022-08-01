//lower upper bound in array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a [] = {6,4,5,5,25,7,8};
    sort(a, a+7);
    for(int i=0; i<7; i++) cout<<a[i]<<" ";
    cout<<endl;
    int *ptr = lower_bound(a,a+7, 8);//if presesent then return the same value
    int *ptr1 = upper_bound(a,a+7,8);//if present or not present always returns the higher value
    cout<<(*ptr)<<endl;
    cout<<(*ptr1)<<endl;
    return 0;
}


// lower upper bound in vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {6,4,5,5,25,7,8};
    sort(a.begin(), a.end());
    for(int i=0; i<7; i++) cout<<a[i]<<" ";
    cout<<endl;
    auto it = lower_bound(a.begin(),a.end(), 8);//if presesent then return the same value
    auto it1 = upper_bound(a.begin(),a.end(),8);//if present or not present always returns the higher value
    if(it==a.end() || it1==a.end())
    {
        cout<<"not found";
        return 0;
    }
    cout<<(*it)<<endl;
    cout<<(*it1)<<endl;
    return 0;
}