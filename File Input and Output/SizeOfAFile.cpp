#include <iostream>
#include <fstream>

int main() {
    std::streampos begin;
    std::streampos end;

    std::ifstream myFile("example.bin", std::ios::binary);
    begin = myFile.tellg();
    myFile.seekg(0, std::ios::end);
    end = myFile.tellg();

    myFile.close();

    std::cout<<"Size is: "<<end-begin<<" bytes.\n"<<std::endl;

    return 0;
}