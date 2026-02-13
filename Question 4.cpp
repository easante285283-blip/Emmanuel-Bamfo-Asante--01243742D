#include <iostream>
#include <string>

// Function to remove vowels from a sentence
std::string removeVowels(const std::string& sentence) {
    std::string result;
    std::string vowels = "aeiouAEIOU";

    // Iterate through each character in the sentence
    for (char ch : sentence) {
        // If the character is not a vowel, append it to the result
        if (vowels.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    return result;
}

int main() {
    std::string input;

    // Prompt the user for input
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input);  // Allow for spaces in input

    // Output the sentence with vowels removed
    std::cout << "Sentence without vowels: " << removeVowels(input) << std::endl;

    return 0;
}
