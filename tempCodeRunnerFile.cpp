#include <iostream>

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "***************CALCULATOR***************" << "\n";
    std::cout << "Enter your choice:- " << "\n";
    std::cout << "1. Addition" << "\n";
    std::cout << "2. Subtraction" << "\n";
    std::cout << "3. Multiplication" << "\n";
    std::cout << "4. Division" << "\n";
    std::cout << "5. Modulus" << "\n";
    std::cin >> op;

    std::cout << "Enter the 1st Number: " << "\n";
    std::cin >> num1;
    std::cout << "Enter the 2nd Number: " << "\n";
    std::cin >> num2;

    switch (op)
    {
    case '1':
        result = num1 + num2;
        std::cout << "The answer is :- " << result << "\n";
        break;
    case '2':
        result = num1 - num2;
        std::cout << "The answer is :- " << result << "\n";
        break;
    case '3':
        result = num1 * num2;
        std::cout << "The answer is :- " << result << "\n";
        break;
    case '4':
        result = num1 / num2;
        std::cout << "The answer is :- " << result << "\n";
        break;
    case '5':
        result = (int)num1 % (int)num2;
        std::cout << "The answer is :- " << result << "\n";
        break;
    default:
        std::cout << "Incorrect Choice" << "\n";
        break;
    }
    std::cout << "****************************************";
    return 0;
}