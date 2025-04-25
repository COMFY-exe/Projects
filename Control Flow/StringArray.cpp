#include <iostream>
#include <string>

int main() {
    std::string Words[8]={"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    char firstLetter='B';

    std::cout<<"\nFrom the array, these are the strings that start with the letter B:\t";

    for (int i=0; i<8; i++) {
        if(Words[i][0] == firstLetter){
            std::cout<<Words[i]<<'\t';
        }
    }

    std::cout<<'\n'<<std::endl;
    return 0;
}