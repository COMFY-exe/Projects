#include <iostream>
#include <fstream>

int main() {
    //Creating and opening a text file
    std::ofstream MyFile("Prototype.txt");

    if(MyFile.is_open()) {
        std::cout<<"The file was created and opened successfully"<<std::endl;
    }
    else {
        std::cout<<"Error in opening the file"<<std::endl;
    }

    //Close the file
    MyFile.close();

    std::cout<<"File closed successfully"<<std::endl;

    return 0;
}