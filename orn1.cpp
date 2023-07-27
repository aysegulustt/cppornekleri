#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Bu bir dosya yazma ornegidir.\n";
        outFile << "Dosyadan veri okumayi ogreniyoruz.\n";
        outFile.close();
    } else {
        std::cout << "Dosya olusturulamadi!" << std::endl;
        return 1;
    }

    std::ifstream inFile("example.txt");
    if (inFile.is_open()) {
        std::string line;
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cout << "Dosya acilamadi!" << std::endl;
        return 1;
    }

    return 0;
};

