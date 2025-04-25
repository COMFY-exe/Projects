#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string Line;
    std::ifstream MyFile("Prototype.txt");

    if (MyFile.is_open()) {
        while (getline(MyFile, Line)) {
            std::cout<<Line<<'\n'<<std::endl;
        }

        MyFile.close();
    }

    else {
        std::cout<<"Unable to open the file"<<std::endl;
    }

    return 0;
}