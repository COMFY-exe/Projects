#include <iostream>

int main() {
    int firstValue;
    int secondValue;

    int* pPointer=nullptr;
    
    //Assign to pPointer, the address of fistValue
    pPointer=&firstValue;
    *pPointer=10; //Indirection to assign 10 to firstValue

    //Assign pPointer with the address of secondValue
    pPointer=&secondValue;
    *pPointer=20; //Indirection

    std::cout<<"\nfirstValue: "<<firstValue<<'\n'<<std::endl;
    std::cout<<"\nsecondValue: "<<secondValue<<'\n'<<std::endl;

    return 0;
}