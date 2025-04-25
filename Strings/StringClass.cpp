#include <iostream>
#include <string>

int main(){
    std::string str1="Hello";
    std::string str2="World";
    std::string str3;
    int len;
     //Copy str2 into str1
     str3=str1;
     std::cout<<"\nstr3: "<<str3<<std::endl;

     //Concatenate str1 and str2
    str3=str1+str2;
    std::cout<<"\nConcatenated string: "<<str3<<std::endl;

    //total length of str3 after concatenation
    len=str3.size();
    std::cout<<"\nLength of concatenated str3: "<<len<<std::endl;
    return 0;
}