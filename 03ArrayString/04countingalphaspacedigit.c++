#include<iostream>
using namespace std;

//Given a sentence , count the number of alphabets & spaces in the sentence

int main()
{
    //store and the count
    //read one by one and then count
    char ch;
    ch = cin.get();
    //coutn
    int alpha;
    int digit;
    int space;
    //could have checked our len doesn't exceed the sentence array, additional check
    while(ch!='\n')
    {
        if(ch>=0 and ch<='9') digit++;
        
        else if((ch>='a' and ch<='z') or ch>='A' or ch<='Z' ) alpha++;

        else if(ch==' ' or ch=='\t') space++; 
    }

    ch = cin.get();

    cout<<"Toatal Alphabets : "<<alpha<<endl;
    cout<<"Toatal Digit : "<<digit<<endl;
    cout<<"Toatal Spaces : "<<space<<endl;

    return 0;
}