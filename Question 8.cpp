#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For sort function

// Function to sort a list of strings in alphabetical order
std::vector<std::string> sortStrings(const std::vector<std::string>& strings) {
    std::vector<std::string> sortedStrings = strings; // Create a copy of the input list
    std::sort(sortedStrings.begin(), sortedStrings.end()); // Sort the copy
    return sortedStrings; // Return the sorted list
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

    // Output the sorted strings
    std::vector<std::string> sortedStrings = sortStrings(strings);
    std::cout << "Sorted strings:\n";
    for (const auto& str : sortedStrings) {
        std::cout << str << std::endl;
    }

    return 0;
}
