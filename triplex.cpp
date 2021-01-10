// Preprocessor Directive
#include <iostream>

// Main Function
int main() {
    // Expression Statements
    std::cout << "You are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...";
    // Expression Statements - because of semicolon

    // Declaration Statements - declaring variables;
    const int a = 8;
    int b = 2;
    int c = 4;
    b = 1;
    int sum = a + b + c;
    int product = a * b * c;
    // Declaration Statements - declaring variables;

    std::cout << std::endl;
    std::cout <<  sum;
    std::cout << std::endl;
    std::cout <<  product;

    // Return Statement
    return 0; 
}
// Main Function