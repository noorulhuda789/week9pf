#include<iostream>
using namespace std;
main()
{  
    string name;
    int counter=0;
    cout<<"enter name :";
    getline(cin,name) ;
    int x=0 ; 
    while(name[x]!='\0') 
    {
        counter=counter+1;
        x++;
    }
    for(int x=counter-1 ;name[x]!='\0' ;x--)
    {
        cout<<name[x];
    }
    
}
