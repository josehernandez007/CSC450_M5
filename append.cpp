
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string userInput;

    // Get input from the user
    std::cout << "Enter text to append to the file: ";
    std::getline(std::cin, userInput);

    // Append the user input to the file
    std::ofstream outFile("/Users/josehernandez/Desktop/CSU Global/CSC450/Module 5/CSC450_CT5_mod5.txt", std::ios_base::app);
    if (outFile.is_open()) {
        outFile << userInput << std::endl;
        outFile.close();
        std::cout << "Data appended to the file successfully." << std::endl;
    } else {
        std::cerr << "Error opening the file for appending." << std::endl;
    }

    return 0;
}
