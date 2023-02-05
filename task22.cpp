#include<iostream>
using namespace std;
main()
{   
    int arrsize=4;
    float sum=0.0;
    float number[arrsize];
    for(int x=0;x<arrsize;x++)
    {
        cout<<"enter cents  : ";
        cin>>number[x];
		}
        float quater=number[0]*0.25;
        float dime=number[1]*0.1;
		float nickel=number[2]*0.05;
		float penny=number[3]*0.01;
        sum=quater+penny+nickel+dime;
       
    float price;
    cout<<"enter price of appliances : ";
    cin>>price;
    if(sum>price)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
