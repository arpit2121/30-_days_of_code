#include<iostream>
using namespace std;

int main()
{
    char sentence[2000];

    cin.getline(sentence,1000);
    cout<<sentence<<endl;

    char paragraph[2000];

    cin.getline(paragraph,1000,'.');
    cout<<paragraph<<endl;

    return 0;
}