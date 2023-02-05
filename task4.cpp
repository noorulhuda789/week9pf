#include<iostream>
using namespace std;
main()
{
    int arrsize;
    cout<<"enter size /index of array :";
    cin>>arrsize;
    float number[arrsize];
    for(int x=0;x<arrsize;x++)
    {
        cout<<"enter index : ";
        cin>>number[x];
    }
    for(int x=(arrsize-1) ;x>=0;x--)
    {
        cout<<number[x] <<" ";
    }
}