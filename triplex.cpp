// Preprocessor Directive
#include <iostream>

// Main Function
int main() {
    // Expression Statements
    std::cout << "You are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...";

    // Declaration Statements - declaring variables;
    // Naming standard is uppercase camel case
    const int CodeA = 8;
    const int CodeB = 18;
    const int CodeC = 80;

    int sum = CodeA + CodeB + CodeC;
    int product = CodeA * CodeB * CodeC;

    /*  multi
        line
        comment
    */

    std::cout << std::endl << std::endl;
    std::cout << "Three numbers make up the code." << std::endl;
    std::cout <<  "The sum of numbers is " << sum << "." << std::endl;
    std::cout <<  "The product equals " << product << "." << std::endl;
    std::cout << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Return Statement
    return 0; 
}