#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For reverse function

// Function to reverse all strings in a list
std::vector<std::string> reverseStrings(const std::vector<std::string>& strings) {
    std::vector<std::string> reversedStrings;

    // Iterate through each string in the input list
    for (const auto& str : strings) {
        std::string reversedStr = str; // Create a copy of the string
        std::reverse(reversedStr.begin(), reversedStr.end()); // Reverse the string
        reversedStrings.push_back(reversedStr); // Add the reversed string to the new list
    }
    
    return reversedStrings; // Return the list of reversed strings
}

int main() {
    int n;
    std::vector<std::string> strings;

    // Input the number of strings
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    std::cin.ignore(); // Ignore the newline character after the number input

    // Input the strings
    std::cout << "Enter the strings:\n";
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::getline(std::cin, str); // Allow for spaces in input
        strings.push_back(str);
    }

    // Output the reversed strings
    std::vector<std::string> reversedStrings = reverseStrings(strings);
    std::cout << "Reversed strings:\n";
    for (const auto& str : reversedStrings) {
        std::cout << str << std::endl;
    }

    return 0;
}
