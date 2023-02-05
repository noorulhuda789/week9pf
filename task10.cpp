#include<iostream>
using namespace std;
main()
{
    string name;
    int counter=0;
    cout<<"enter word :";
    getline(cin,name);
    int len=name.length();
    for( int x=len-1 ;x>=0; x-- )
    {
        if(name[x]=='a' || name[x]=='e'|| name[x]=='o' || name[x]=='i' ||name[x]=='u')
        {
            counter=counter+1;
        }
    }
    cout<<"number of vowels :" <<counter;
}