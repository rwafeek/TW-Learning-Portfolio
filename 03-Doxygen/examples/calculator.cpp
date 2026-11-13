/**
 * @file calculator.cpp
 * @brief Demonstrates a simple calculator function.
 * @author Your Name
 */

#include <iostream>

using namespace std;

/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the two integers.
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * @brief Main function of the program.
 * @return 0 when the program finishes successfully.
 */
int main()
{
    int num1 = 10;
    int num2 = 20;

    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
    cout << "Sum: " << add(num1, num2) << endl;

    return 0;
}
