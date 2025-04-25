#include <iostream>

int main() {
    
    int numberOfElements=0;
    int* dynamicArray=nullptr;

    std::cout<<"\nHow many numbers would you like to type?\n>>> ";
    std::cin>>numberOfElements;

    dynamicArray = new int[numberOfElements];

    if (dynamicArray==nullptr)
    {
        std::cout<<"\nError: Memory could not be allocated!"<<std::endl;
    }

    else {
        for (int i = 0; i < numberOfElements; i++)
        {
            std::cout<<"Enter number: ";
            std::cin>>dynamicArray[i];
        }

        std::cout<<"\nYou have entered the numbers:\t";

        for (int j=0; j<numberOfElements; j++){
            std::cout<<dynamicArray[j]<<'\t';
        }

        std::cout<<'\n'<<std::endl;

        delete[] dynamicArray;
        
    }
    

    return 0;
}