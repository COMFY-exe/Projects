#include <iostream>

int main() {
    int numbersArray[5];
    
    int* pPointer=nullptr;

    //Assign to pPointer, the address of the first element in the array
    pPointer=numbersArray;

    *pPointer=10; //Assign a value to the first element

    /*increment the pointer using pointer arithmetic to assign the address 
    of the second element to the pointer*/
    pPointer++;
    *pPointer=20; //Assigning a value to the second element in the array

    //Assign the address of the third element to the pointer
    pPointer=&numbersArray[2];
    *pPointer=30;

    //Assign the address of the 4th element using pointer arithmetic
    pPointer=numbersArray + 3;
    *pPointer=40;

    //Assign the resultant address to te first element
    pPointer=numbersArray;

    //Using indirection and pointer arithmetic to to assign a value to the 5th element
    *(pPointer + 4) = 50;

    //Iterate and output all the elements in the array

    std::cout<<'\n'<<std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout<<numbersArray[i]<<"\t";
    }
    
    std::cout<<'\n'<<std::endl;

    return 0;
}