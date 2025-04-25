#include <iostream>

int main() {

    int x=3;

    //Pre-incrementing x so that y has the resultant value
    int y=++x;

    std::cout<<"\nx: "<<x<<std::endl;
    std::cout<<"\ny: "<<y<<'\n'<<std::endl;

    return 0;
}