#include <iostream>
#include <fstream>


int main()
{
    int n = 10;
    std::fstream outFile;
    outFile.open("File.txt");
    if (!outFile) {
        std::cout << "Can not open File1" << std::endl;
    }
    char b[ sizeof(n)*2 ];
        std::cout << ">";
        std::cin.getline(b,sizeof(b));
        outFile << b;
    outFile.close();
    outFile.open("File.txt");
    if (!outFile) {
        std::cout << "Can not open File1" << std::endl;
    }
    std::fstream inFile;
    inFile.open("File2.txt");
    if (!inFile) {
        std::cout << "Can not open File2" << std::endl;
    }
    char d[sizeof(n) * 2];
    while (outFile.peek() != EOF) {
        outFile >> d;
        inFile << d;
    }
    outFile.close();
    inFile.close();
}
 