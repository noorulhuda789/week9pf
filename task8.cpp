#include<iostream>
using namespace std;
main()
{   
    string name;
    cout<<"enter your name :";
    getline(cin,name);
    int reslut;
    reslut=name.length();
    if(reslut % 2==0)
    {
        cout<<"even";
    
    }
    else
    {
        cout<<"odd";
    }
}
