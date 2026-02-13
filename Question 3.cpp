#include <iostream>
#include <vector>

// Function to calculate the average of a list of integers
double calculateAverage(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        return 0; // Avoids division by zero
    }

    double sum = 0;

    // Calculate the sum of the integers
    for (int num : numbers) {
        sum += num;
    }

    // Return the average
    return sum / numbers.size();
}

int main() {
    int n;
    std::vector<int> numbers;

    // Input the number of integers
    std::cout << "Enter the number of integers: ";
    std::cin >> n;

    // Input the integers
    std::cout << "Enter the integers: ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    // Output the average
    std::cout << "The average is: " << calculateAverage(numbers) << std::endl;

    return 0;
}
