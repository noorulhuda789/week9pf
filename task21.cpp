#include<iostream>
using namespace std;
main()
{
    int arrsize;
    int array1[2];
    cout<<"enter arrsize for array no 2 ";
    cin>>arrsize;
    int array2[arrsize];
    int i;
    for( i=0 ;i<2;i++)
    {
        cout<<"enter numbers of array 1:";
        cin>>array1[i];
    }
    cout<<endl;
    for( i=0 ;i<arrsize;i++)
    {
        cout<<"enter numbers of array 2:";
        cin>>array2[i];
    }
    cout<<array1[0];
    for(int j =0;j<arrsize;j++)
    {
        cout<<"  "<<array2[j] <<"  ";
    }
    cout<<array1[1];
}