#include <iostream>
#include <fstream>

int main() {
    std::streampos size;
    char* memBlock;

    std::ifstream File("example.bin", std::ios::in|std::ios::out|std::ios::ate);
    //File.open("example.bin", std::ios::in|std::ios::out|std::ios::ate);

    if (File.is_open()) {
        size = File.tellg();
        memBlock = new char[size];
        File.seekg(0, std::ios::beg);
        File.read(memBlock, size);
        File.close();

        std::cout<<"The entire file content is in memory"<<std::endl;
        delete[] memBlock;

    }
    else {
        std::cout<<"Unable to open the file"<<std::endl;
    }

    return 0;
}