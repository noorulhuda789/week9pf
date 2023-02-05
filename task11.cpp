#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"enter word :";
    getline(cin,name);
    int len=name.length();
    for( int x=0 ;x<len; x++)
    {
        int alphabet= name[x];
        char num=alphabet+1;
        cout<<num;
    }
}