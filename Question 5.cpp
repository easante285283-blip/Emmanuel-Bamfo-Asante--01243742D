#include <iostream>
#include <vector>
#include <string>

// Function to find the longest string in a list
std::string findLongestString(const std::vector<std::string>& strings) {
    std::string longest;

    // Iterate through each string in the list
    for (const auto& str : strings) {
        // Update longest if the current string is longer
        if (str.length() > longest.length()) {
            longest = str;
        }
    }
    
    return longest;
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

    // Output the longest string
    std::string longest = findLongestString(strings);
    std::cout << "The longest string is: " << longest << std::endl;

    return 0;
}
