#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

bool VowelCheck(char x) {
    x=tolower(x);

    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        return true;
    }

    else {
        return false;
    }
}

int countCharacters(std::string Sentence) {
    int Count=0;

    for (int i=0; i > -1; i++) {
        char x=Sentence[i];
        if (Sentence[i] != ' ') {
            Count++;
        }
        else {
            Count = Count;
        }

        if (i == Count) {
            break;
        }
    }

    return Count;
}

std::string Reverse(int Size){
    std::ifstream TextFile("COM221.txt", std::ios::in);
    std::string Data[Size], newData[Size], fileData;

    for(int i=0; i<Size; i++){
        TextFile.seekg(std::ios::cur);
        TextFile>>Data[i];
    }

    for(int i=0; i<Size; i++){
        newData[i]=Data[(Size-1)-i];
        fileData+=newData[i];
    }

    return fileData;
}

int main() {
    std::string fileData;
    int Size, Count;
    Count=0;
    Size=0;
    std::string Data[Size];
    std::ifstream TextFile("COM221.txt", std::ios::in);

    TextFile.seekg(0, std::ios::beg);

    getline(TextFile, fileData);
    Count=countCharacters(fileData);

    std::cout<<Count<<std::endl;

    for (int i=0; i>-1; i++) {
        TextFile>>fileData;

        if (TextFile.seekg(std::ios::end)) {
            break;
            Size=i;

            std::cout<<"The File contains "<<Size<<" words"<<std::endl;

            for(int j=0; j<Size; j++) {
                TextFile.seekg(std::ios::cur);
                TextFile>>Data[j];
            }
        }
    }

    std::cout<<"Reversed sentence: "<<Reverse(Size)<<std::endl;

    for(int i=0; i<Size; i++){
        char x=Data[i][1];
        x=toupper(x);
    }

    std::cout<<"Sentence with the second letter of each word, capitalized: "<<Data<<std::endl;
        
    return 0;
}