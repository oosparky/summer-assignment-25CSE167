#include <iostream>
#include <string>
#include <vector>

bool isAnagram(std::string str1, std::string str2) {

    if (str1.length() != str2.length()) {
        return false;
    }

    int count[256] = {0};

    for (int i = 0; i < str1.length(); i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string str1, str2;

    std::cout << "Enter first string: ";
    std::cin >> str1;

    std::cout << "Enter second string: ";
    std::cin >> str2;

    if (isAnagram(str1, str2)) {
        std::cout << "\"" << str1 << "\" and \"" << str2 << "\" are anagrams." << std::endl;
    } else {
        std::cout << "\"" << str1 << "\" and \"" << str2 << "\" are NOT anagrams." << std::endl;
    }

    return 0;
}