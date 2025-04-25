#include <iostream>

int main() {
    int x=3;

    //Post-incrementing x so that y assumes the initial value of x
    int y=x++;

    std::cout<<"\nx: "<<x<<std::endl;
    std::cout<<"\ny: "<<y<<'\n'<<std::endl;

    return 0;
}