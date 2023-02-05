#include<iostream>
using namespace std;
main()
{   
    int arrsize;
    cout<<"enter size /index of array :";
    cin>>arrsize;
    float cgpa[arrsize];
    for(int x=0;x<arrsize;x++)
    {
        cout<<"enter index : ";
        cin>>cgpa[x];
    }
    for(int x=0; x <arrsize; x++)
    {
    cout<<cgpa[x] <<" ";
    }
}