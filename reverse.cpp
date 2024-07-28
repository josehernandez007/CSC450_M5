
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

int main() {
    //Location 
    std::ifstream inFile("/Users/josehernandez/Desktop/CSU Global/CSC450/Module 5/CSC450_CT5_mod5.txt");
    std::ofstream outFile("/Users/josehernandez/Desktop/CSU Global/CSC450/Module 5/CSC450-mod5-reverse.txt");

    if (inFile.is_open() && outFile.is_open()) {
        std::string fileContent((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
        std::reverse(fileContent.begin(), fileContent.end());
        outFile << fileContent;
        
        std::cout << "File content reversed and stored in CSC450-mod5-reverse.txt." << std::endl;

        inFile.close();
        outFile.close();
    } else {
        std::cerr << "Error opening input or output file." << std::endl;
    }

    return 0;
}
