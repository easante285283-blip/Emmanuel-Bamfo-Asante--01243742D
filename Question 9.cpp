#include <iostream>

// Function to calculate the sum of all integers between two integers
int sumOfIntegers(int start, int end) {
    int sum = 0;
    
    // Ensure the loop counts from the smaller to the larger integer
    if (start > end) {
        std::swap(start, end); // Swap if start is greater than end
    }
    
    for (int i = start; i <= end; ++i) {
        sum += i; // Add each integer to the sum
    }
    
    return sum; // Return the total sum
}

int main() {
    int a, b;

    // Input two integers
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    // Output the sum of all integers between a and b
    int totalSum = sumOfIntegers(a, b);
    std::cout << "The sum of all integers between " << a << " and " << b << " is: " << totalSum << std::endl;

    return 0;
}
