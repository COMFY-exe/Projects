#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 11);

    int expiryDays=dis(gen);

    if (expiryDays==0)

    {
        std::cout<<"\nYour subcription has expired!\n"<<std::endl;
    }
    else if (expiryDays==1)
    {
        std::cout<<"\nYour subcription expires within a day! Renew Now and save 20%!\n"<<std::endl;
    }
    else if (expiryDays>1 && expiryDays<=5)
    {
        std::cout<<"\nYour subcription expires in "<<expiryDays<<" days. Renew now and save 10%!\n"<<std::endl;
    }
    else if (expiryDays>5 && expiryDays<=10)
    {
        std::cout<<"\nYour subcription will expire soon. Renew Now!\n"<<std::endl;
    }
    else
    {
        std::cout<<"\nYou have an active subscription.\n"<<std::endl;
    }
}