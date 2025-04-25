#include <iostream>
#include <fstream>

int main(){

    std::ofstream MyFile("Prototype.txt");

    if(MyFile.is_open()) {
        MyFile<<"This is a line.\n";
        MyFile<<"This is another line, written by the ifstream\n";
        MyFile.close();

        std::cout<<"Write operation was successful.\n"<<std::endl;
    }

    else{
        std::cout<<"Unable to open the file"<<std::endl;
    }

    return 0;
}