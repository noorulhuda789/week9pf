#include<iostream>
using namespace std;
main()
{   
    int arrsize;
     float sum=0;
    cout<<"enter size /index of array :";
    cin>>arrsize;
    float number[arrsize];
    for(int x=0;x<arrsize;x++)
    {
        cout<<"enter index : ";
        cin>>number[x];
    }
     for(int x=0;x<arrsize;x++)
     {
        sum=sum+number[x];
     }
     cout<<sum  <<"   ohm";
}
