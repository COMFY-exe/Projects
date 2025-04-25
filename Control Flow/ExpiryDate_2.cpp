
#include <iostream>
#include <random>

int main() {
    
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 11);

    int expiryDays=dis(gen);
     switch (expiryDays)
     {
     case 0:
        std::cout<<"\nYour subscription has expired.\n"<<std::endl;
        break;

     case 1:
        std::cout<<"\nYour subscription expires within a day. Renew now and save 20%\n"<<std::endl;
        break;
     
     case 2 ... 5:
        std::cout<<"\nYour subscription expires in "<<expiryDays<<" days. Renew now and save 10%\n"<<std::endl;
        break;

     case 6 ... 10: 
        std::cout<<"\nYour subscription expires soon. Renew Now!\n"<<std::endl;
        break;
     
     default:
        std::cout<<"\nYou have an active subscription.\n"<<std::endl;
        break;
     }

    return 0;
}