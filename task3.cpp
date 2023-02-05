#include<iostream>
using namespace std;
main()
{
     int arrsize;
     string reslut;
    cout<<"enter size /index of array :";
    cin>>arrsize;
    int find;
    float number[arrsize];
    for(int x=0;x<arrsize;x++)
    {
        cout<<"enter index : ";
        cin>>number[x];
    }
    cout<<"which  number you want to detect :";
    cin>>find;
     for(int x=0;x<arrsize;x++)
     {
        if(find==number[x])
        {
            reslut ="number present ";
            break;
        }
        else
        {
            reslut="not found";
            
        }
     }
     cout<<reslut;


}