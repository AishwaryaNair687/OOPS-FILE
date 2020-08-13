#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char str[20],len,vow[13]={'a','e','i','o','u','A','E','I','O','U'};
      cout<<"enter your string: ";
    gets(str);
    len=strlen(str);
    for(int i=0;i<len;i++){
        for(int j=0;j<12;j++){
            if(str[i]==vow[j]){
                for(int k=i;k<len;k++){
                    str[k]=str[k+1];
                }
            }
        }
    }
    cout<<"new string is: "<<str;
}