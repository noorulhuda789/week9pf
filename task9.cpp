#include<iostream>
using namespace std;
main()
{
    string name;
    string reslut;
    cout<<"enter word :";
    getline(cin,name);
    int len=name.length();
    char letter;
    cout<<"enter letter you want :";
    cin>>letter;
    for( int x=len-1 ;x>=0; x-- )
{
    if(letter==name[x])
    {
        reslut="find";
        break;
    }
    else
    {
        reslut="not found ";
        
    }
}
cout<<reslut;
    
}
