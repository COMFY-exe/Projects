#include <iostream>
#include <string>
#include <random>

//Function for calculating square area
void Square() {
    double Length, Area;
    
    std::cout<<"\n\nEnter the length of the sides:\t";
    std::cin>>Length;

    Area = pow(Length, 2.0);
    std::cout<<"\nArea of the Square = "<<Area<<'\n'<<std::endl;
}

//Function for calculating Rectangle area
void Rectangle() {
    double Length, Width, Area;

    std::cout<<"\n\nEnter Length:\t";
    std::cin>>Length;

    std::cout<<"Enter Width:\t";
    std::cin>>Width;

    Area=Length*Width;

    std::cout<<"\nArea of the Rectangle = "<<Area<<"\n"<<std::endl;

}

//Function for calculating triangle area
void Triangle() {
    double Base, Height, Area;
    
    std::cout<<"Enter Base length:\t";
    std::cin>>Base;

    std::cout<<"Enter Height:\t";
    std::cin>>Height;

    Area = (1/2)*(Base*Height);

    std::cout<<"\nArea of the Triangle = "<<Area<<'\n'<<std::endl;
}

int main() {

    int Choice, index;

    std::string printStatement[3]={"\nThe value, you have entered, is not an option. Please try again:\t", 
        "\nSorry. The value is invalid. Try again with another option:\t", "\nThis value is not acceptable. Please, enter another option:\t"};

    std::cout<<"\nPlease select the shape for calculating the area:\n 1. Square\n 2. Rectangle\n 3. Triangle\n 4. Quit program\n\nEnter selection:\t";
    std::cin>>Choice;

    do
    {
            while (Choice < 1 || Choice > 4)
        {
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<> dis(0, 2);

            index=dis(gen);
            std::cout<<printStatement[index]<<std::endl;

            std::cout<<"\nPlease select the shape for calculating the area:\n 1. Square\n 2. Rectangle\n 3. Triangle\n 4. Quit program\n\nEnter selection:\t";
            std::cin>>Choice;

        }

        switch (Choice)
        {
        case 1:
            Square();
            break;

        case 2:
           Rectangle();
           break;

        case 3:
           Triangle();
           break;
        
        default:
            std::cout<<"\nInvalid input!\n";
            break;
        }

        std::cout<<"\nPlease select the shape for calculating the area:\n 1. Square\n 2. Rectangle\n 3. Triangle\n 4. Quit program\n\nEnter selection:\t";
        std::cin>>Choice;
    } while (Choice != 4);
    
    std::cout<<"\nProgram Terminated.\n"<<std::endl;
    
    return 0;
}