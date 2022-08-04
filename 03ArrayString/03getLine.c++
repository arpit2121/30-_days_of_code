#include<iostream>
using namespace std;
int main()
{
    char sentence[1000];

    char temp = cin.get();
    int len = 1;
    while(temp!='#')
    {
        sentence[len++] = temp;
        //update the value of temp
        temp = cin.get();

    }
    sentence[len]='\0';
    cout<<"Length "<<len<<endl;
    cout<<sentence<<endl;
}