#include <iostream>
#include <fstream>

int main() {
    char data[100];

    //Open a text file in write mode
    std::ofstream outfile;
    outfile.open("Prototype.txt");

    std::cout<<"Writing to the text file..."<<std::endl;
    std::cout<<"Enter your name: ";
    std::cin.getline(data, 100);

    //Write inputted data into the text file
    outfile<<data<<std::endl;

    std::cout<<"Enter your age: ";
    std::cin>>data;
    std::cin.ignore();

    //Enter the age into the output file
    outfile<<data<<std::endl;

    //Close the output file
    outfile.close();

    //Open the output file in read mode
    std::ifstream inputFile;
    inputFile.open("Prototype.txt");

    std::cout<<"Reading from a text file..."<<std::endl;
    inputFile>>data;

    //Write the data onto the console
    std::cout<<data<<std::endl;

    //Repeat the read-write process from the file
    inputFile>>data;
    std::cout<<data<<std::endl;

    //Close the open file
    inputFile.close();

    return 0;
}