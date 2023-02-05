#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"word :";
    getline(cin,word);
    int  len=word.length();
    for(int i=0 ;i<len;i++)
    {

        if(word[i]!='a'&& word[i]!='e'&& word[i]!='i'&&word[i]!='o'&& word[i]!='u')
        {
            cout<<word[i];
        }
        
    }
}