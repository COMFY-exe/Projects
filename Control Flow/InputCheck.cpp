#include <iostream>
#include <string>
#include <random>

int main() {

    int userEntry;

    std::string printStatement[3]={"\nThe value, you have entered, is not between 5 and 10. Please try again:\t", 
    "\nSorry. The value is invalid. Try again with another number:\t", "\nThis value is not acceptable. Please, enter another number:\t"};
    
    std::cout<<"\nEnter a value between 5 and 10:\t";
    std::cin>>userEntry;

    while (userEntry<=5 || userEntry>=10)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, 2);

        int index=dis(gen);

        std::cout<<printStatement[index]<<std::endl;
        std::cin>>userEntry;
    }

    std::cout<<"\nThe value ("<<userEntry<<") has been accepted.\n"<<std::endl;
    
    return 0;
}