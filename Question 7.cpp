#include <iostream>
#include <vector>
#include <algorithm> // For sort function

// Function to calculate the median of a list of integers
double calculateMedian(std::vector<int>& numbers) {
    // Sort the numbers
    std::sort(numbers.begin(), numbers.end());
    
    size_t size = numbers.size();
    if (size == 0) {
        return 0; // Return 0 if the list is empty
    }
    
    // Calculate the median
    if (size % 2 == 0) {
        // If even, average the two middle numbers
        return (numbers[size / 2 - 1] + numbers[size / 2]) / 2.0;
    } else {
        // If odd, return the middle number
        return numbers[size / 2];
    }
}

int main() {
    int n;
    std::vector<int> numbers;

    // Input the number of integers
    std::cout << "Enter the number of integers: ";
    std::cin >> n;

    // Input the integers
    std::cout << "Enter the integers:\n";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    // Output the median
    double median = calculateMedian(numbers);
    std::cout << "The median is: " << median << std::endl;

    return 0;
}
