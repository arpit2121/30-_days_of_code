#include<iostream>
using namespace std;

int main()
{
    //numbers[row][col] = {{'a','b','c','\0'},{'s','e','o','\0'}}
    char numbers[][10] = {
        "one",
        "two",
        "three",
        "forty",
        "eight",
        "hundred"
    };
    int i=3;
    //cout<<numbers[i];//print all rows
    cout<<numbers[i][1]<<endl;

    for(int i=0; i<6; i++)
    {
        cout<<numbers[i];//cout treats chr array iffernently this behvaiour is written in cout statemnet
    }
    return 0;
}