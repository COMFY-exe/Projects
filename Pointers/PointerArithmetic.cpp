#include <iostream>

int main() {
    int* pPointer=nullptr;

    int numbersArray[3]={10, 20, 30};

    //Assign the address of the first element of the array to pPointer
    pPointer=numbersArray;

    //Output the address of the first element
    std::cout<<"\nAddress at pPointer: "<<pPointer<<std::endl;
    std::cout<<"\nAddress of numbersArray[0]: "<<numbersArray<<std::endl;

    //Using indirection to access the value of the first element of the array
    std::cout<<"\nValue at pPointer: "<<*pPointer<<std::endl;

    //Output the value of the second element by pre-decrementation and indirection
    std::cout<<"\nValue at ++pPointer"<<*(++pPointer)<<std::endl;

    //Assigning pPointer to the first element
    pPointer=numbersArray;

    //Output the value of the first element
    std::cout<<"\nValue at pPointer: "<<*(pPointer++)<<'\n'<<std::endl;

    return 0;
}