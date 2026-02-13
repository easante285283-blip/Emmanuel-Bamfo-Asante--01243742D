#include <iostream>
#include <string>

// Function to count the number of vowels in a string
int countVowels(const std::string& str) {
    int count = 0;
    // Define a set of vowels
    std::string vowels = "aeiouAEIOU";

    // Iterate through each character in the string
    for (char ch : str) {
        // Check if the character is a vowel
        if (vowels.find(ch) != std::string::npos) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;

    // Prompt the user for input
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);  // Allow for spaces in input

    // Output the number of vowels
    std::cout << "Number of vowels in the string: " << countVowels(input) << std::endl;

    return 0;
}
