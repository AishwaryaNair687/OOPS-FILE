#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter string-";
    gets(str);
    int len=strlen(str),word=1;
    for(int i=0;i<len;i++)
    {
        if(str[i]== ' '){
            word++;
        }
    }
    cout<<"No. of words-->"<<word;
}



