#include<iostream>
using namespace std;
main()
{  
    int arrsize;
    int product;
    int multiple;
    cout<<"enter size /index of array :";
    cin>>arrsize;
    float number[arrsize];
    for(int x=0;x<arrsize;x++)
    {
        cout<<"enter index : ";
        cin>>number[x];
    }
    cout<<"enter number you want to multplie witn the numbers of array :";
    cin>>product;
    for(int x=arrsize-1;x>=0;x--)
    {
        multiple=product*number[x];
        cout<<multiple <<endl;
    }
}
