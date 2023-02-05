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
    int smallest=number[0];
    for(int x=1 ; x<arrsize ;x++)
    {
        if(smallest>number[x])
        {
            smallest=number[x];
        
        }
    }
    cout<<smallest;
}
