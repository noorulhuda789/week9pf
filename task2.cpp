#include<iostream>
using namespace std;
main()
{   
    int arrsize;
    int sum=0;
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
    float average;
    average=sum/arrsize;
    cout<<"sum of numbers are  "<<sum <<"    and average is "<<average;
}
