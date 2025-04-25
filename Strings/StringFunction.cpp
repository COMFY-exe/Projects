#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str1[10]="Hello";
    char str2[10]="World";
    char str3[10];
    int len;

    //copy str2 into str1
    strcpy(str3, str1);
    cout<<"\nstrcpy(str3, str1): "<<str3<<endl;
    
    //Concatenating str1 and str2
    strcat(str1, str2);
    cout<<"\nstrcat(str1, str2): "<<str1<<endl;

    //Lenght of str1 after concatenation
    len=strlen(str1);
    cout<<"\nLength of str1: "<<len<<endl;

    return 0;
}