#include<iostream>
#include<vector>
#include<string>
using namespace std;
//size can change in run time also
int main(){
    string s; //= "hello world"; //dynamic array
    getline(cin,s,'.');
    for(char ch:s)
    {
        cout<<ch<<endl;
    }

    
    cout<<s<<endl;

    int n = 5;
    vector<string> sarr;
    string temp;
    while(n--){
        getline(cin,temp);
        sarr.push_back(temp);
    }

    for(string x : sarr){
        cout<<x<<","<<endl;
    }

    //vecotr<string> ...
}