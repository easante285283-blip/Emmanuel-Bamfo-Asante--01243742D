#include <iostream>

// Function to return the sum of two integers
int sum(int x, int y) {
    return x + y;
}

int main() {
    int a, b;
    
    // Input values for a and b
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    
    // Display the sum
    std::cout << "The sum of " << a << " and " << b << " is: " << sum(a, b) << std::endl;
    
    return 0;
}
