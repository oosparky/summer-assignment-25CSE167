#include <iostream>
#include <string>

char getMaxOccurringChar(std::string str) {

    int count[256] = {0};

    int maxCount = 0;
    char maxChar = ' ';

    for (int i = 0; i < str.length(); i++) {
    
        unsigned char index = str[i];
        count[index]++;
        
        if (count[index] > maxCount) {
            maxCount = count[index];
            maxChar = str[i];
        }
    }

    return maxChar;
}

int main() {
    std::string str;
    
    std::cout << "Enter a string: ";

    std::getline(std::cin, str); 

    if (str.empty()) {
        std::cout << "String is empty." << std::endl;
        return 0;
    }

    char maxChar = getMaxOccurringChar(str);
    
    std::cout << "The maximum occurring character is: '" << maxChar << "'" << std::endl;

    return 0;
}