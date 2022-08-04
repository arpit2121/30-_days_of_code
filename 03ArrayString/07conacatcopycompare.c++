#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[1000] = "apple";
    char b[1000];
    //calc length
    cout<<strlen(a)<<endl;


    //strcpy
    strcpy(b,a);
    cout<<b<<" "<<a<<endl;

    //compare
    cout<<strcmp(a,b)<<endl;


    //conacatenate
    char web[] = "www.";
    char domain[] = "codingminutes.com";
    cout<<strcat(web,domain)<<endl;

    strcpy(b, strcat(web,domain));
    cout<<b<<endl;

    cout<<strcmp(a,b)<<endl;


    return 0;
}