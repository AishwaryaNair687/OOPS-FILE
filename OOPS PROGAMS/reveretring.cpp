#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char string[50],temp;
    int a,b;
    cout<<"ENTER YOUR STRING:";
    gets(string);
    b=strlen(string)-1;
    for(a=0; a<b; a++,b--)
    {
        temp=string[a];
        string[a]=string[b];
        string[b]=temp;
    }

cout<<"result:"<<string;
return 0;
    
}