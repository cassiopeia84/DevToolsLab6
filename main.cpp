#include <iostream>

int sum(int a, int b);
int difference(int a, int b);
int multiplication(int a, int b);
float division(float a, float b);

int main() {
    int firstNumber, secondNumber;
    char operation;

    std::cout << "Enter two numbers and math operation between them. Use only +, -, *, /\nExample: 12 13 +\n";
    std::cin >> firstNumber >> secondNumber >> operation;

    switch (operation) {
        case '+':
            std::cout << sum(firstNumber, secondNumber) << "\n";
            break;
        case '-':
            std::cout << difference(firstNumber, secondNumber) << "\n";
            break;
        case '*':
            std::cout << multiplication(firstNumber, secondNumber) << "\n";
            break;
        case '/':
            std::cout << division((float)firstNumber, (float)secondNumber) << "\n";
            break;
        default:
            std::cout << "You can't use this operation\n";
            break;
    }




    return 0;
}

int sum(int a, int b){
    return a + b;
}

int difference(int a, int b){
    return a - b;
}

int multiplication(int a, int b){
    return a * b;
}

float division(float a, float b){
    return a / b;
}
