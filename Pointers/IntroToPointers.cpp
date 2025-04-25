#include <iostream>

int main() {
    //Pointer declaration
    int* pPointer=nullptr;

    int integerVar=5;

    //Assigning a pointer to the address of the object 
    pPointer=&integerVar;

    //Output the value of integerVar
    std::cout<<"\nintegerVar: "<<integerVar<<std::endl;

    //Output the address  of integerVar
    std::cout<<"\nAddress of integerVar: "<<&integerVar<<std::endl;

    //Output the Address assigned to pPointer
    std::cout<<"\npPointer: "<<pPointer<<std::endl;

    //Output the address of pPointer
    std::cout<<"\nAddress of pPointer: "<<&pPointer<<"\n"<<std::endl;

    return 0;
}